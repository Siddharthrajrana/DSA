myStr = "I am PFB. I provide free python tutorials for you to learn python."
substring = "python"
output_string = ""
str_list = myStr.split(substring)
print(str_list)
for element in str_list:
    output_string += element

print("The input string is:", myStr)
print("The substring is:", substring)
print("The output string is:", output_string)
