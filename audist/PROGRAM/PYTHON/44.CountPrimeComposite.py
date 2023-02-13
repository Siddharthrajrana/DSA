pno=0
cno=0
while 1:
  n=int(input("Enter No"))
  if n==-1:
      break
  is_com=0
  for i in range (2,n):
      if n%i==0:
          is_com=1
          break

  if is_com:
      cno+=1
  else:
      pno+=1


print("Total composite",cno)
print("Total prime",pno)
