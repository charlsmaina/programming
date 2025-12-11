#this is a program that reads the contents of the file words.txt and converts th words to keys and thhen checks wheather a string in the text is present in the file.
fhand=open("words.txt","r")
my_dict=dict()
for line in fhand:
    line=line.strip()
    line_list=line.split()
    for word in line_list:
        my_dict[word]=my_dict.get(word,0)+1
print("the" in my_dict)
print(my_dict.get("charls",0))#get () method checks wheather a given key is in the dict ..if it is not it gives it an initial defaul value
for keys in my_dict:#iterates through all the keys of the dictionary
    if my_dict[keys] ==1 :#a condition to print all words that appear only ones
        print(keys,my_dict[keys])
lst=list(my_dict.keys())#keys method provides a dynamic view object while list function converts the dictionary to alist
print(type(lst))
lst.sort()
print(lst)

#str.maketrans() function in python is used to create a translation table that specifies how characters in a string should be mapped to other characters or deleted.This translation table is ussualy used with the str.translate()method to perform character level translations, replacements, or deletions in a string.

