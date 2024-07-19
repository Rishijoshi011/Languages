import numpy as np

# ! Exponenational operator (**)

def power(num, pow = 2):
    return num ** pow

# ! floor division operator (//)

def floorDivision(num, num2):
    return num // num2
    

# ! matrix multiplication 

def input_matrix(rows, columns):
    print(f"Enter elements for the {rows}x{columns}")
    return np.array([[int(input()) for j in range(columns)] for i in range(rows)])

def matrixMultiplication():
    row = int(input("Enter row size for the Matrix: "))
    column = int(input("Enter column size for the Matrix: "))

    matrix_A = input_matrix(row, column)
    
    row2 = int(input("Enter row size for the Matrix2: "))
    column2 = int(input("Enter column size for the Matrix2: "))

    matrix_B = input_matrix(row2, column2)
    
    print("Matrix A: ")
    for i in matrix_A:
        print(i)

    print("Matrix B: ")
    for i in matrix_B:
        print(i)
    
    result = matrix_A @ matrix_B
    print("The result is: ", end = "\n")
    for i in result:
        print(i)

# ! identity operator

def isPresent(list, num):
    for i in list:
        if i == num:
            print(f"{num} present in given list", end = "\n")
            return
        
    print(f"{num} is not present in given list", end = "\n")

while True:
    print("1.Exponenational Operator")
    print("2.Floor division operator")
    print("3.Matrix multiplication ")
    print("4.Identity operator")
    print("5.Exit")

    choice = int(input("Enter your choice: "))  
    
    if choice == 1:
        num = int(input("Enter number: "))
        powerOfNumber = int(input("Enter power: "))
        print(f"Ans is: {power(num, powerOfNumber)}")
    elif choice == 2:
        num = int(input("Enter a number: "))
        num2 = int(input("Enter a divisor: "))
        print(f"Ans is: {floorDivision(num, num2)}")
    elif choice == 3:
        matrixMultiplication()
    elif choice == 4:
        size = int(input("Enter size of List: "))
        
        print("Enter Elements: ")
        list = np.array([int(input()) for i in range(size)])
        num = int(input("Enter num to find in list: "))

        isPresent(list, num)
    elif choice == 5:
        exit(0)