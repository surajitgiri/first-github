x=int(input("enter first number:"))
y=int(input("enter second number:"))
z=int(input("enter third number:"))
if x>y and x>z:
    print("first number is greatest")
    print("the number is :",x)
if y>x and y>z:
    print("second number is greatest")
    print("the number is :",y)
if z>x and z>y:
    print("third number is greatest")
    print("the number is :",z)