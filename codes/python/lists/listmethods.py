fhandle=open("romeo.txt","r")

my_list=[]#creates an empty list
for line in fhandle:
    lst=line.split()#split method splits words in a line and puts them in a list
    for word in lst:
        my_list.append(word)#adds iteams to a list
print(my_list)

#extend method
#it is used to add the elements of a list to another list.Its argument is the name of the list whose contents are to be added
list2=["Charls","Maina"]
my_list.extend(list2)
print(my_list)

#nsert method
#it is used to insert an item at a specified position in a list 
#it takes to arguments :index,and the item to be added
my_list.insert(0,"This is a list:")
print(my_list)

#remove method.removes first occurence of an item and takes a single argument(item)
my_list.remove("This is a list:")
print(my_list)

#pop method.used to remove and return an item in a list based on its index
#it takes one optional argument(index)
nam=my_list.pop()
print(nam)
print(my_list)

#index method.it is used to find the  index of  the first occurence of a specified item
#takes 3 arguments[iteam,startindex(optional) and the end(optional)]
n=my_list.index("Charls")

#count method.counts the number of times an item occurs ina list
n0=my_list.count("is")
print(n,n0)

#sort method.applied to sort a list.can take two optional arguments namely:key(this is a function that is applied to every tem in the listfor sorting) reverse(it is a boolean value that indicates whether the list is to be sorted in ascending or descending order)

my_list.sort(key=None,reverse=True)
print(my_list)

#copy method.it is used to create a shallow copy of the list that can be manipulated 