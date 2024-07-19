def fibonacci(fibo):
    if fibo == 0:
        return 0
    elif fibo == 1:
        return 1
    else:
        return fibonacci(fibo - 1) + fibonacci(fibo - 2)

def print_fibonacci(fibo):
    fibo_series = [fibonacci(i) for i in range(fibo)]
    print(f"Fibonacci series up to {fibo} terms:")
    print(fibo_series)

# ! using fibo func as an obj

fibonacci_func = fibonacci

print_fibonacci(10)
