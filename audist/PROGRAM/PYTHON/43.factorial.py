f=lambda a:1 if a==0 else a*f(a-1)
n=int(input("Enter anumber"))
res=f(n)
print(res)
