def exchange(s):
   start=s[0]
   end=s[-1]
   return end+s[1:-1]+start
    
    

s=input("Enter string")
print(exchange(s))
        
