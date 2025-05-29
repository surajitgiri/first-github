#names={'riya','hiya','miya'}
#print(names)    # no ordered

#for x in range (names):

   # print(x)

#print(names[0])     # not possible

#names={'riya','hiya','miya','riya'}     #   duplicate not allowed
#print(names)

#python={'surajit',6,True,6.7,}      # mix of different data type
#print(python)

#names.add(4)
#print(names)

        # removing element from a set
#names.discard("hiya")      # use 'remove'/'discard'(better)
#print(names)

    # add another sequence into the present set
#names1={'ram','shyam','sita'}
#names.update(names1)
#print(names)

    # remove the element which is not present in set
#names.discard('riya')
#print(names)

        #joining 2 set

s1={'a','b','c'}
s2={'d','e','a'}
print(s1,s2)

s3=s1.union(s2)
print(s3)

#s1.update(s2)
#print(s1)

    # print the 'common Element' of the two given set
s1.intersection_update(s2)
print(s1)

    # print the 'all element ' except 'common Element' of the two given set
#s1.symmetric_difference_update(s2)
#print(s1)