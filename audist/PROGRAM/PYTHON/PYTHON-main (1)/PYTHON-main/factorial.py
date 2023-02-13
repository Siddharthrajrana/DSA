evencount=0
oddcount=0
num=0
while num!=-1:
    num=int(input("Enter a number"))
    if num%2==0:
        evencount+=1
    else:
        oddcount+=1


print(evencount)
print(oddcount)
