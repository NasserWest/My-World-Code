i = int
x = int
z = "*"
def demo1():
    i=int(input("number of *:"))
    x = 0
    while x < i:
        print(z,end="")
        x += 1
demo1()