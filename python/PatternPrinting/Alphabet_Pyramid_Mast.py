#x=int(input("enter a number:"))
#for i in range(1,x+1):
   # for j in range(1,i+1):
      #  print(chr(j),end=' ')
    # print()

x=int(input("enter a number:"))
a=65
for i in range(1,x+1):
    for j in range(1,i+1):
        print(chr(a),end=' ')
        a+=1
    print()