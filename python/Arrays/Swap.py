x=int (input("enter a number:"))

list=[]
for _ in range(x):
    num=int(input())
    list.append(num)
idx1=int(input("enter index1:"))
idx2=int (input("enter index2:"))

print(list)

temp=list[idx1]
list[idx1]=list[idx2]
list[idx2]=temp

print(list)

#
