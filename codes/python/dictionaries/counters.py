#dictionaries can be used to count how often we see something

ccc=dict()

ccc["students"]=1
ccc["teachers"]=1

print(ccc)
ccc["teachers"]=ccc["teachers"]+1
print(ccc)
print(ccc["teachers"])

#dictionary tracebacks

#it is an error that occurs when we try to reference a key that does not exist
#we can use the in operator to check wheather a key exists in the dictionary


#when we encounter a new name when counting we can add it as a new entry an start counting to start counting


counts=dict()#creates an empty dictionary
names=["charls","maina","charls","kinyua","maina","charls"] # alist of names to count from
for name in names:# a loop to count
    if name not in counts:#checks wheather it is the first time we are encountering a name
        counts[name]=1
    else:
        counts[name] = counts[name] + 1   #increments the value of the key by one each time it encounters the key
print(counts)

#get method
#it is used to check wheather a key is present in a dictionaty and if the key is not present it gives the key a default value

for name in names:
    counts[name]=counts.get(name,0) + 1
print(counts)