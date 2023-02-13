def max3(a,b,c):
 if a>b:
    if a>c:
        print(a)
    else:
        print(c)
 else:
    if b>c:
        print(b)
    else:
       print(c)


a=int(input("Enter first number"))
b=int(input("Enter first number"))
c=int(input("Enter first number"))
max3(a,b,c)
