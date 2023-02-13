s=input("Enter string:")
s1=""
c=0
for i in s:
    if c%2==0:
        s1=s1+i
    c+=1

print(s1)
