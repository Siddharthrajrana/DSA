def fun1(x,y):
  if y <=x: 
    return 1+fun1(x-y,y)
  else:
    return 0

x=int(input("Enter first number:"))
y=int(input("Enter second number:"))
res=fun1(x,y)
print(res)

""" OUTPUT->
Enter first number:100
Enter second number:20
5       """
