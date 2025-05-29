x=int (input("enter a number"))
if (x%3==0 or x%5==0) and x%15!=0:
    print("the number is divisible by 5 or 3 not divided by 15")
else:
    print("the number is divisible by 5 or 3 and also divided by 15")