n=int(input("Enter number:"))
p=n
rev=0
while(n>0):
    dig=n%10
    rev=rev*10+dig
    n=n//10
if(p==rev):
    print("The number is a palindrome!")
else:
    print("The number is not a palindrome!")
