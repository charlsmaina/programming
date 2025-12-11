names={"teacher":10,"students":500,"classes":15}
for key in names:
    print(key,names[key])

#we can also get the list of keys in a dictionary by using the list function
l=list(names)
print(l)
print(type(l))

#we can also use the keys method
print(names.keys())

#we can also get the values of the keys in a dictionary by using the values method
print(names.values())

#we can also get the key value pairs using the items method
print(names.items())

#the iteams method allows us to create loop that can have two iteration variables

for var_1,var_2 in names.items():
    print(var_1,var_2)

#for each iteration, the first iteration variable is the key and the second iteration variable is the coresponding value of the key