def create_list(n,m):
    your_list = []
    for i in range(1,n+1):
        if i%m==0:
         your_list.append(i)
    return your_list


n=int(input("Enter number"))
m=int(input("Enter number"))
numbers=create_list(n,m)
print(numbers)
