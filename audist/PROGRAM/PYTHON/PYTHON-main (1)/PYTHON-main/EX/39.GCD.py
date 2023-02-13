
def GCD(x, y):
   while(y):
       x, y = y, x % y
   return x


n=int(input("Enter first number"))
m=int(input("Enter second number"))
res = GCD(n,m)
print("The GCD is", res)
