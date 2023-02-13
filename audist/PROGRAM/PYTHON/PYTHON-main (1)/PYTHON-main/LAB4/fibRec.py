def fib(n):
    if n==0:
        return 0
    if n==1:
        return 1
    return fib(n-1)+fib(n-2)


n=int(input("Enter the number of terms"))
for i in range(n):
  print(fib(i),end=" ")


n=int(input("Enter the number of terms: "))
a=0
b=1
print(a,b,end=" ")
for x in range(2,n):
    c=a+b
    print(c,end=" ")
    a=b
    b=c
