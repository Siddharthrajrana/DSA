rev=0
def revRec(n):
    global rev
    if n>0:
        rem=n%10
        rev=(rev*10)+rem
        revRec(n//10)

    return rev

n=int(input("Enter a number"))
res=revRec(n)
print(res)
