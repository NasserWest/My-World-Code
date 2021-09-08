a = int(input("Side1:"))
b = int(input("Side2:"))
c = int(input("Side3:"))
s = float
area = float
if a+b>c and b+c>a and a+c>b:
    print("This is triangle")
    s = (a+b+c)/2
    import math
    area = math.sqrt((s*(s-a)*(s-b)*(s-c)))
    print(area)
else :
    print("0")