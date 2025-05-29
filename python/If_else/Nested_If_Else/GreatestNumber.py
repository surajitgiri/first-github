x=int(input("enter first number:"))
y=int(input("enter second number:"))
z=int(input("enter third number:"))
if x>y:
    if x>z:
        print(x," is greatest number")
    else:
        print(z,"is greatest number")
else:
    if y>z:
        print(y,"is greatest number")    