def removeindex(s,n):
    s1=""
    count=0
    for i in s:
        if count!=n:
            s1=s1+i
        count+=1

    return s1

s=input("Enter string")
n=int(input("Enter the index "))
print(removeindex(s,n))
        
