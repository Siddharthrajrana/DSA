s=input("Enter string")
l=len(s)
print(l)
s1=""
s1+=s[0]
s1+=s[1]
s1+=s[l-1]
s1+=s[l-2]
print(s1)
