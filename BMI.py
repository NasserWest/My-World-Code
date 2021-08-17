"""
BMI = Weight/Height*Height

"""
 
a=float(input("Enter your Weight(kg):"))

b=float(input("Enter your Height(m):"))

c = float
c = a/(b*b)
print("bmi = %.1f" %c)

if  c < 0:
    print("can't check")
else :
    if c < 18.5:
        print("underweight")
    if 18.5< c < 24.9:
        print("normal")
    if 25< c < 29.9:
        print("above standard")
    if c > 30:
        print("too fat")


