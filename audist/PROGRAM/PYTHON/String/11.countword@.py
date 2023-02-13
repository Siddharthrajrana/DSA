def word_count(s,w):
    a=[]
    count=0
    list=s.split()
    for i in range (0,len(list)):
        if list[i]==w:
            count+=1
   

    return count

s=input("Enter the sentance")
w=input("Enter the string")
print(word_count(s,w))
