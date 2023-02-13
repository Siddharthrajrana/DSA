def find_ch(s,n,ch):
    print(s.find(ch,n,len(s)))



s=input("Enter string:")
n=int(input("Enter the starting index:"))
ch=input("Enter the character:")
find_ch(s,n,ch)
