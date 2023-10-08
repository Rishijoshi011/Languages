print("Enter no of rows")
no_of_rows = int(input())

print("Type One or Zero")
o_z = int(input())
ans = bool(o_z)
if ans == True:
    for i in range(1, no_of_rows + 1):
        for j in range(1,i + 1):
            print("*", end= " ")
        print()

elif ans == False:
    for i in  range(no_of_rows, 0 , -1):
        for j in  range(1, i + 1):
            print("*", end= " ")
        print()