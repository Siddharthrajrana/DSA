def is_prime(x):
    if x < 2:
        return 0
    else:
        for n in range(2,x):
            if x % n == 0:
               return 0
        return 1
p=int(input("Enter Number"))
print(is_prime(p))
