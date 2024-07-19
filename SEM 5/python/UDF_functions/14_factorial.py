
# ! Factorial with recursion

def factorial(fact):
    if fact == 1:
        return 1
    else:
        return fact * factorial(fact - 1)

num = int(input("Enter any num: "))
print(f"Factorial is: {factorial(num)}")

# ! Factorial without recursion

result = 1

while num > 0:
    result *= num
    num -= 1
    
print(f"Factorial without recursion: {result}")