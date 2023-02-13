def modify(s):
    s1=""
    ch=s[0]
    count=0
    for i in s:
        if i==ch and count>0:
            s1=s1+'$'
        else:
            s1=s1+i
        count+=1
    return s1
            
    return s1
s=input("Enter string:")
print(modify(s))
