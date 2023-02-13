def s_made(s):
    s1=""
    if len(s)<2:
        return s1
    else:
        s1=s1+s[0]+s[1]+s[len(s)-2] +s[len(s)-1]
    return s1
s=input("Enter string:")
print(s_made(s))
