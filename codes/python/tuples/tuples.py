#tuples are imutable
#assignment can be done with more than one variable on the left side:

(x, y)=("Charls", "Maina")
print(x,y)
#tuples are comparerable,it goes on until it answers the question#it scans until it have a definitive answer

#sorting lists of tuples

fhand=open("words.txt","r")
mydict=dict()
for line in fhand:
    line=line.strip()
    mylist=line.split()

    for word in mylist:
        mydict[word]=mydict.get(word,0)+1
#print(mydict)

fdict=dict()
for www,ccc in mydict.items():
    if ccc <= 1:
        continue
    else:
        #print(www,ccc)
        fdict[www]=ccc
print(sorted(fdict))

print(sorted(fdict.items()))#sorted alone sorts the keys and returns  alist of the sorted keys   but sorted(dict.iteams()) sorts and displays a dict of both the keys and values
#in short it returns a sorted list of tuples

#for www,ccc in sorted(fdict.items()):
    #print(www,ccc)

#sorting by values 

slist=list()#cretes another list
for k,v in fdict.items():#cretes two iteration variables
    slist.append((v,k))#adds the key-value pairs in a flipped order

print(slist)
slist=sorted(slist,reverse=True)#sorts the list .reverse attribute means it should be sorted in descending order
print(slist)
print(type(slist))
print(len(slist))

for (v,k )in slist[:10]:
    print((k,v))