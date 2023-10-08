print("Enter your age")
age = int(input())

if age > 18:
    print("You are able to drive car")
elif age == 18:
    print("Meet us physically")
elif age < 18:
    print("No you can't drive")
else:
    print("Enter valid age")