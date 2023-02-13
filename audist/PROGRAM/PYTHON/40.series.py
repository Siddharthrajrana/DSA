import math 
def SUM(x, n):
    total = 1
    for i in range(1, n + 1):
        total = total + ((x**i)/math.factorial(i))
    return total
 

x=int(input("Enter the value of x"))
n = int(input("Enter the number of terms"))
s = SUM(x, n)
print(round(s, 2))
