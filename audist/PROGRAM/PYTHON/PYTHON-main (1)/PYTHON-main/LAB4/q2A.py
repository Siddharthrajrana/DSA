def C(p,n,r):
    return (p * (1 + r / 100) ** n) - p

p = int(input("Enter Principal: "))
n = int(input("Enter Rate: "))
r = int(input("Enter Time: "))

print("Compound Interest:%.2f"%C(p,n,r))
