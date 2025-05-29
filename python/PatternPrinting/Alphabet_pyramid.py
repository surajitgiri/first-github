#x=int(input("enter a number:"))
#a=65
#for i in range(1,x+1):
   # print("  " * (x-i), end=' ')
    #for j in range(1,2*i):
     #   print(chr(a),end=' ')
      #  a+=1
    #print()

   
   
x=int(input("enter a number:"))

for i in range(1,x+1):
    print("  " * (x-i), end=' ')
    for j in range(65,2*i+64):
        print(chr(j),end=' ')
        
    print()
