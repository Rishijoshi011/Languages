list1 = [3, 4, 6, 9, 11]

def isPrime(num):
    if num <= 1:
        return "NP"
    elif num == 2: 
        return "P"         # * 2 is only even prime number
    elif num % 2 == 0:
        return "NP"        
    else:
        for i in range(2, int(num**0.5) + 1):
            if num % i == 0:
                return "NP"
        return "P"

result = map(lambda x: isPrime(x), list1)

print(list(result))
