
from math import factorial
n =int(input("Enter no of rows"))
for i in range(n):
	for j in range(n-i+1):
		print(end=" ")

	for j in range(i+1):
		# nCr = n!/((n-r)!*r!)
		print(factorial(i)//(factorial(j)*factorial(i-j)), end=" ")

	# for new line
	print()
