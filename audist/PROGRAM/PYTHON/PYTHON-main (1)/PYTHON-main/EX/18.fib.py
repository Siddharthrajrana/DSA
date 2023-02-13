#print fibonacci series

def fib(n):
    if n <= 1:
        return n
    elif n > 1:
        return (fib(n-1)+fib(n-2))


n=int(input("Enter Number of terms"))
for i in range(n):
    print(fib(i), end = ",")
print()
