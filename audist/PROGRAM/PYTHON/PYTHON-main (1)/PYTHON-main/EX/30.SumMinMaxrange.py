min = int(input(" Please Enter the minmum value : "))
max = int(input(" Please Enter the Maximum Value : "))
even = 0
odd = 0
 
for number in range(min, max + 1):
    if(number % 2 == 0):
        even += number
    else:
        odd +=number

        
print("Sum of Even Number:",even)
print("Sum of odd Number:",odd)
