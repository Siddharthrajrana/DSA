def power(x, y):
    pow = 1
    for i in range(y):
      pow = pow * x
 
    return pow
 
 


x=int(input("Enter value of x:"))
y=int(input("Enter vale of y:"))
print(power(x, abs(y)))
