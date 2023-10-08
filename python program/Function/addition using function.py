def addition_three(a, b, c):
   """This function returns sum of three numbers"""
   result = a + b + c
   return result

val1 = int(input("Enter any numbers: "))
val2 = int(input("Enter any numbers: "))
val3 = int(input("Enter any numbers: "))
print(addition_three.__doc__)

result = addition_three(val1, val2 , val3)
print("Sum of three numbers: ", result)