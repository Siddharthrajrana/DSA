b=int(input("Enter Base:"))
e=int(input("Enter exponent:"))
res=1
while e!=0:
    res=res*b
    e-=1

print("Result",res)
