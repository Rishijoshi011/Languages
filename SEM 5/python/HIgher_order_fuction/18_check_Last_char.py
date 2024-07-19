str = input("Enter any String: ")
last_char = input("Enter char to check: ")

result = lambda x: x[-1] == last_char
print(result(str))