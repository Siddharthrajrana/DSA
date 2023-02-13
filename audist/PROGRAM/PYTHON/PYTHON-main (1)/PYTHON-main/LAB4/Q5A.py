def swap(p,q):
    global a
    global b
    a=p
    b=q

swap(10,20)
t=a
a=b
b=t

print("After swap:",a,b)
