s=input("Enter string:")
lcase=0
ucase=0
schr=0
digit=0
for i in s:
   n=ord(i)
   if n==32:
       continue
   if n>=65 and n<=90:
       ucase+=1
   if n>=97 and n<=122:
       lcase+=1
   if n>=48 and n<=57:
       digit+=1
   else:
       schr+=1

print("LowerCase",lcase)
print("UpperCase",ucase)
print("Special chr",schr)
print("Digit",digit)
