import string
mydict=dict()

fname=input("Enter a file name: ")
fhand=open(fname,"r")

mytranslations=str.maketrans("","",string.punctuation)

for line in fhand:
    #print(line)
    line=line.strip()
    line=line.lower()
    line=line.translate(mytranslations)
   # print(line)
    wds=line.split()
    for w in wds:
        mydict[w]=mydict.get(w,0)+1
print(mydict)

#sort the dictionary by value
mylist=list()

for k,v in mydict.items():
    mylist.append((v,k))
    mylist.sort(reverse=True)
for k,v in mylist[:10]:
    print(k,v)
 
    
