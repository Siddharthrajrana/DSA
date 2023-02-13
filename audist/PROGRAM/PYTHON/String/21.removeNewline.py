def func(s):
	return ''.join(s.splitlines())


mystring = "\n Hello \n all \n welcome "
print("Original string:", mystring)
print("After deleting the new line:", func(mystring))
