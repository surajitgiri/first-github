cp=int(input("enter cost price: "))
sp=int(input("enter shelling price:"))
if cp<sp:
    print("you got profit")
elif cp==sp:
    print("No Profit no Loss")
else:
    print("you got loos") 
profit=sp-cp
print("your profit or loss money is:",profit)
  