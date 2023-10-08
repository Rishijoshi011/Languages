string = ["Hello", "my", "name", "is", "Rishi", 11]
print(string[0:3])

num = [5, 4, 3, 2, 1]  # list is mutable which can change
num.sort()
print(num, type(num), type(string))

numbers = (11, 12, 13)  # tuple is immutable which can't change

a = 11
b = 7

print(a, b)
a, b = b, a
print(a, b)
