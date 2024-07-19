num = 7;

def show():
    print(num) # * using global variable

    
def show2():
    num = 11 # * using local variable
    print(num)

def show3():
    global num # * changin value of global variable
    num = 69
    print(num)
    
show()
show2()
show3()