
# ! fist 15 num

sum = 0
for i in range(1,16):
    sum += i
    
print("First 15 num sum is: ", sum)    

# ! randome 15 num

m = []
total = 0
print("Enter elements: ")
for i in range(0, 15):
    m.append(int(input()))
    total += m[i]

print(f"Random 15 num sum is: {total}")
