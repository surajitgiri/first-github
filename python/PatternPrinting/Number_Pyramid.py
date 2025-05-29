x=int(input("enter a number:"))
for i in range(1,x+1):
        print("  " * (x-i), end=' ' )
        for j in range(1,2*i):
         print(j ,end=' ')
        print()