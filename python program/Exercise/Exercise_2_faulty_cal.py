faulty_cal = {"45*3" : "555", "56+9" : "77", "56/6" : "4"}

var1 = input("Enter first operand: ")
operator = input("Enter operator: ")
var2 = input("Enter second operand: ")

string = var1 + operator + var2

if string in faulty_cal:
    print(faulty_cal[string])
elif operator == "+":
    print(int(var1) + int(var2))
elif operator == "-":
    print(int(var1) - int(var2))
elif operator == "*":
    print(int(var1) * int(var2))
elif operator == "/":
    print(int(var1) / int(var2))