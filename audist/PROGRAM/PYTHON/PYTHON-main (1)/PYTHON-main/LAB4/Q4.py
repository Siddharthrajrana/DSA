
fact = lambda x: 0  if x <1 else 1+ fact(x/2)

n=int(input("Enter a number:"))
#res=la(fact)
print(fact(n))


"""
  Enter a number:100
  7
"""

"""
if n<1: #BASE CASE
      return 0
    else:
     return lambda1(n/2)+1
"""
