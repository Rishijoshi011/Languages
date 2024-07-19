
# ! length finder

def length(str):
    return len(str)

# ! change char

def strChange(str, old, new):
    return str.replace(old, new)

# ! palindrome

def palindrome(str):
    if str[::-1] == str[0::]:
        print("String is palindrome")
    else:
        print("String is not palindrome")

# ! cat

def cat(str, str2):
    return str + str2

while True:
    print("1.Length finder")
    print("2.Change specific char")
    print("3.Palindrome")
    print("4.Concatination")
    print("5.Exit")

    choice = int(input("Enter your choice: "))  
    
    if choice == 1:
        str = input("Enter String: ")
        print(f"Length of given str: {length(str)}")
    elif choice == 2:
        str = input("Enter String: ")
        old = input("Enter str to find: ")
        new = input("Enter str to change: ")

        print(f"Result: {strChange(str, old, new)}")

    elif choice == 3:
        str = input("Enter String: ")
        palindrome(str)
        
    elif choice == 4:
        str = input("Enter String: ")
        str2 = input("Enter String: ")

        print("Result is: ", cat(str, str2))
        
    elif choice == 5:
        exit(0)