    # Dictionary
phones={
    "surajit" :9883628107,
    "kabita"  :9609697199,
    'subimal'    :9735515758,
}
#print(phones)

        #checking type of dictionary
#print(type(phones))

    #checking the length of the dictionary
#print(len(phones))

    #access item of dictionary
#print(phones["surajit"])        #same
#print(phones.get("subimal"))    #same

    #print only key
#print(phones.keys())

    #update value of dictionary
#phones["subimal"]=95644829
#print(phones["subimal"]) 

    #add an element in the  dictionary

#phones["soumajit"]=65783924
#print(phones)
                    #or
#more_phones={
#    'gopal' :6294000733,
#}
#phones.update(more_phones)
#print(phones)

    # remove an element from dictionary
#phones.pop("subimal")
#print(phones)
                #or
#phones.popitem()    #remove last element
#print(phones)

#phones.clear()      #  this function use for empty the dictionary
#print(phones)

    #printing  keys value of dictionary using  'for' loops
for x in  phones:
        print(x)
    #printing All value of dictionary using  'for' loops
print(phones[x])

for x,y in  phones.items():     #important
               print(x,y)

#nested dictionary
#phones={
#    "Area1":{
 #       'x':0,
 #       'y':1,
 #       'z':2,
  #  },
  #  "Area2":{
   #     'a':4,
  #      'b':5,
   #     'c':6,
   #}
#print(phones["Area2"]['c'])

