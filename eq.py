n = int(input())
welfares = list(map(int, input().split()))

max_welfare = max(welfares)
total_cost = sum(max_welfare - welfare for welfare in welfares)
        
print(total_cost)