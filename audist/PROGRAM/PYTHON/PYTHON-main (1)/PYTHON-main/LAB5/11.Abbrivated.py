s=input("Enter string:")
s1=""
s1=s1+s[0]
index=0
for i in s:
    if i==" ":
      s1=s1+s[index+1]
    index+=1

print(s1)
