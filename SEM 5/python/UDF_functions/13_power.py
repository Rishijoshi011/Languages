def power(num, pow = 2):
    return num ** pow

num = int(input("Enter any number: "))
power_ = int(input("Enter power for number: "))

print(f"Ans is: {power(num)}")
print(f"Ans is: {power(num, power_)}")