n=int(input("Enter the value of n"))
for n in range (1,n+1):
    sum=0;
    for i in range(1,n):
        if n%i==0:
            sum+=i


    if n==sum:
        print(n)
