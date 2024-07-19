
# ! Insertrion in Array

size = int(input("How many numbers you want to enter in Array: "))
a = [] 

print("Enter elements: ")
for i in range(size):
    a.append(int(input()))

for i in a:
    print(i, end = " ")

# ! sumation of elements

print(end = "\n")

sumation = a[0]
multiplication = a[0]

for i in a[1:]:
    sumation += i
    multiplication *= i
    
print(f"Sumation is: {sumation}")
print(f"Multiplication is: {multiplication}")

# ! Matricies

row = int(input("Enter number of rows: "))
column = int(input("Enter number of columns: "))

a = [[0 for _ in range(column)] for _ in range(row)]
print("Enter elements of the first matrix: ", end = "\n")
for i in range(row):
    for j in range(column):
        a[i][j] = int(input())

row2 = int(input("Enter number of rows: "))
column2 = int(input("Enter number of columns: "))

b = [[0 for _ in range(column2)] for _ in range(row2)]
print("Enter elements of the second matrix: ", end = "\n")
for i in range(row2):
    for j in range(column2):
        b[i][j] = int(input())

print("First Matrix: ")

for i in range(row):
    for j in range(column):
        print(a[i][j], end = " ")
    print()

print("Second Matrix: ")

for i in range(row2):
    for j in range(column2):
        print(b[i][j], end = " ")
    print()


# ! addition of matrix          

total = [[0 for _ in range(column)] for _ in range(row)]

for i in range(row): 
    for j in range(column):
        total[i][j] += a[i][j] + b[i][j]

print("Sumation of matrix is: ")

for i in range(row):
    for j in range(column):
        print(total[i][j], end = " ")    
    print()    
    
# ! multiplication of matrix
# print()

if column != row2:
    print("Cannot be multiplied because of incompatible dimensions")
else:
    print("Multiplication of matrix is: ")

    mul = [[0 for _ in range(column2)] for _ in range(row)]

    for i in range(row): 
        for j in range(column2):
            for k in range(column):
                mul[i][j] += a[i][k] * b[k][j] # * or we can just use @ operator for matrix mul like 
                # * a @ b using numepy 

    for i in range(row):
        for j in range(column2):
            print(mul[i][j], end = " ")    
        print()    

