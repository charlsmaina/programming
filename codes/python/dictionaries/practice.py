my_dict=dict()
fname=input("Enter the file name: ")
fhand=open(fname,"r")
for line in fhand:
    line=line.strip()
    my_list=line.split()
    for word in my_list:
        my_dict[word]=my_dict.get(word,0)+1
#print(my_dict)
print(len(my_dict))#prints back the number of key value pairs in the dictionary
print(type(my_list))

#the in operator tells you whether the query exists as a key in the dict
print("mind-numbing" in my_dict)

#values method.checks and is used to show the values stored in the dictionary.it represents a dynamic view object that reflects changes made in the dictionary.
my_values=(my_dict.values())

print(my_values)
#for wds in my_values:
    #print(wds)
print(type(my_values))

#values()method creates an efficient way of accessing dictionary keys
#it creates a  dynamic view object which is not a list
# the key differences are:

# mutability...the dynamic view object is immutable while a list is mutable
#  type....the object is of type dict values while list are a different set of data structures.
#iterationability...both can be iterated through
#storage ....the object does not create a new data structure or consume additional memory storage but always reflects the contents of the keys in the dictionary while for a list they consume memory relative to the amount of iteams stored 

