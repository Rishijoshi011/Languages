val = int(input("Enter number for second player to guess: "))
guess = int(input("Enter in how many guess player should find your number: "))

i = 0
rem = guess
while i < rem:
    ans = int(input("Enter your guess: "))
    if ans == val:
        print("Congratulation your ans is correct")
        print("Your remaining guess are ",guess)
        break
    elif ans > val:
        print("Guess lower then ",ans, end = "\n")
    elif ans < val:
        print("Guess higher then ",ans, end = "\n" )
    i += 1
    guess -= 1
    print("Your remaining guess are ",guess, end = "\n")
