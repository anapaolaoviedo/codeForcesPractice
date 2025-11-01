
def criba_de_eratostenes(n):

    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False # 0 y 1 no son primos
    p = 2
    while p * p <= n:
        if is_prime[p]:
            for i in range(p * p, n + 1, p):
                is_prime[i] = False
        p += 1

    primos = [i for i, es_primo in enumerate(is_prime) if es_primo]
    return primos

primos_hasta_30 = criba_de_eratostenes(30)
print(f"Primos hasta 30: {primos_hasta_30}") # [2, 3, 5, 7, 11, 13, 17, 19, 23, 29]