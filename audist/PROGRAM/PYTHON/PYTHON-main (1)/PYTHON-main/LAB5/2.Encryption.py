s=input("Enter string:")
key=int(input("Enter key"))
s1=""
for i in s:
    s1+=(chr(ord(i)+key))
    

print(s1)
