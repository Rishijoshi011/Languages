newline = "        \n"
newline = newline
def getdate():
    import datetime
    return datetime.datetime.now()

while True:
    print("Chose what to do? \n\t 1.To Log data \n\t 2.To Retrive data \n\t 3.Exit")
    log_ret = int(input())

    if log_ret == 3:
        break

    if log_ret == 1:
        print("Chose whose data to log? \n\t 1.Harry \n\t 2.Rohan \n\t 3.Hammad")
        person = int(input())

        if person == 1:
            print("chose what to log? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                print("Enter what did you eat last time ?")
                user_text = input()

                f = open("food_harry.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()
            elif food_or_exer == 2:
                print("Enter which exercise you did ?")
                user_text = input()

                f = open("exercise_harry.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()
        elif person == 2:           # Rohan
            print("chose what to log? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                print("Enter what did you eat last time ?")
                user_text = input()

                f = open("food_rohan.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()
            elif food_or_exer == 2:
                print("Enter which exercise you did ?")
                user_text = input()

                f = open("exercise_rohan.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()
        elif person == 3:           # Hammad
            print("chose what to log? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                print("Enter what did you eat last time ?")
                user_text = input()

                f = open("food_hammad.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()
            elif food_or_exer == 2:
                print("Enter which exercise you did ?")
                user_text = input()

                f = open("exercise_hammad.txt", "a")
                f.write("[" + str(getdate()) + "] :- " + user_text + newline)
                f.close()

    elif log_ret == 2:
        print("Chose whose data to retrive? \n\t 1.Harry \n\t 2.Rohan \n\t 3.Hammad")
        person = int(input())

        if person == 1:             # Harry
            print("chose what to retrive? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                f = open("food_harry.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()

            elif food_or_exer == 2:
                f = open("exercise_harry.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()

        if person == 2:             # Rohan
            print("chose what to retrive? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                f = open("food_rohan.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()

            elif food_or_exer == 2:
                f = open("exercise_rohan.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()


        if person == 3:
            print("chose what to retrive? \n\t 1.Food \n\t 2.Exercise")
            food_or_exer = int(input())

            if food_or_exer == 1:
                f = open("food_hammad.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()

            elif food_or_exer == 2:
                f = open("exercise_hammad.txt", "r")
                content = f.readlines()
                for lines in content:
                    print(lines)
                f.close()