# f = open("hello.txt")
# content =  f.read()           # to print as single char
# content = f.readline()        # To print single line
# content = f.readlines()       # to print as a list
# lines = f.readlines()         # to print every line
# for line in lines:
#     print(line)
# f.close()

#           Write mode
# f = open("hello.txt", "w")
# f.write("Aur vai kya hal hai ?")
#  f.close()

#           Read mode and Write mode
# f = open("hello.txt", "r+")
# content = f.read()
# print(content)
# f.write("\nha bhai aa raha hu")
# f.close()

#           Append mode
# f = open("hello.txt", "a")
# f.write("\nrakh teri ma ka rakh")
# f.close()

#   seek() and tell() function
# f = open("hello.txt")
# print(f.tell())         # tells that where our pointer means no. char (kaha hai pointer)
# print(f.readline())
# f.seek(0)               # tells that where to start
# print(f.tell())
# print(f.readline())
# f.close()