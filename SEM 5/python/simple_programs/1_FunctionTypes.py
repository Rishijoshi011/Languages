
# ! No Return type, No arguments

def sum():
    a = int(input("Enter a number: "))
    b = int(input("Enter a number: "))

    print("Sum is: " , (a + b))
    
sum()

# ! retrun type, No arguments

def sum2():
    a2 = int(input("Enter a number: "))
    b2 = int(input("Enter a number: "))

    return (a2 + b2)

print("sum is: ", sum2())

# ! No return type, arguments

def sum3(a3, b3):
    print("Sum is: ", a3 + b3)

a3 = int(input("Enter a number: "))
b3 = int(input("Enter a number: "))
sum3(a3, b3)

# ! return type, arguments

def sum4(a4, b4):
    return a4 + b4

a4 = int(input("Enter a number: "))
b4 = int(input("Enter a number: "))
print("sum is: ", sum4(a4, b4))