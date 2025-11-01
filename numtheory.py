import math
from collections import Counter

def get_divisors(num):
    divisors = []
    i = 1
    while i * i <= num:
        if num % i == 0:
            divisors.append(i)
            if i != num // i:
                divisors.append(num // i)
        i += 1
    return divisors

def can_split_to_g(num, g):
    
    if num < 3 or g <= 0 or num < 2 * g:
        return False
    
    for x1 in range(g, num, g):
        for x3 in range(g, num, g):
            x2 = num - x1 - x3
            if x2 > 0 and x1 <= x2 <= x3:
                return True
    return False

def solve(n, k, arr):
    if n == 0 or not arr:
        return 1
    
    all_divs = set()
    for x in arr:
        if x > 0:
            all_divs.update(get_divisors(x))
    
    if not all_divs:
        return 1
    
    cnt = Counter(arr)
    
    for g in sorted(all_divs, reverse=True):
        need_erase = 0
        
        for val, freq in cnt.items():
            if val % g == 0:
                continue
            if can_split_to_g(val, g):
                continue
            need_erase += freq
        
        if need_erase <= k:
            return g
    
    return 1

t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    arr = list(map(int, input().split()))
    print(solve(n, k, arr))