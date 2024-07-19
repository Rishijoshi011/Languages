
# ! Insertrion in Array

size = int(input("How many numbers you want to enter in Array: "))
a = [] 

print("Enter elements")
for i in range(size):
    a.append(int(input()))

for i in a:
    print(i, end = " ")
    
# ! Deletion in Array

delete = int(input("Enter an index to delete element: "))
a.pop(delete)

for i in a:
    print(i, end = " ")


# ! Arithmetic of arrays

print(end="\n")

sumation = a[0]
subtraction = a[0] 
multiplication = a[0]
division = a[0]

for i in a[1:]:
    sumation += i
    subtraction -= i
    multiplication *= i
    division /= i
    
print(f"Sumation is: {sumation}")
print(f"Subtraction is: {subtraction}")
print(f"Multiplication is: {multiplication}")
print(f"Division is: {division}")
