#Required argument
def print_name(s):
    print(s)

s="Rohit"
print_name(s)

#keyword Argumen)
def f1(a,b):
    print("a=",a)
    print("b=",b)



f1(10,20)
f1(b=20,a=10)

#Default Argument

def add(a=0,b=0,c=0):
    print(a+b+c)


add()
add(10,20)
add(10,20,30)

#variable lenghth argument
def avg(*n):
 sum=0
 for x in n:
     sum+=x

 return sum/len(n) 


res=avg(1,2,3,4)
print("AVG:",res)

