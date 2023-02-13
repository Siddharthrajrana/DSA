name=input("Enter name")
pan=input("Entre PAN card Number")
if name.isalpha()==True:
    print(name)
else:
    print("Invalid Name")
if pan.isdigit()==True:
    print(pan)
else:
    print("Invalid PAN no")
