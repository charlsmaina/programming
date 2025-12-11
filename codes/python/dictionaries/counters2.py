fhandle=open("mbox-short.txt","r")
my_dictionary=dict()
""" count=0
for line in fhandle:
    my_list=line.strip().split()
    #count=count+1
    #print(count)
    
    for word in my_list:
         if not word in my_dictionary:
            my_dictionary[word]=1
    else :
            my_dictionary[word]=my_dictionary[word]+1
print(my_dictionary)
 """
            
for line in fhandle:
    line=line.strip()
    my_list=line.split()
    for word in my_list:
        my_dictionary[word]=my_dictionary.get(word,0)+1
print(my_dictionary)

for words in my_dictionary:#the words keyword in this case refers to the keys which are the iteration variables
    print(words,my_dictionary[words])
print(my_dictionary.keys())#creates a list of the keys in the dictionary
print(my_dictionary.values())#creates a list of the values of the different keys in the dictionary
print(my_dictionary.items())#gives a combination of keys and values  in alist
for aaa,bbb in my_dictionary.items():#the two iteration variables help to iterate over the key-value pairs created y the iteams() method
    print(aaa,bbb)