fhand=open("mbox-short.txt","r")
mydict=dict()
count=0

for line in fhand:
    if len(line)<1:
        continue
    elif  line.startswith("From:"):
        continue

    else:
        if not line.startswith("From"):
            continue
        else:
            
            line=line.strip()
            #print(line)
            #count=count+1
           # print(count)
            
            mylist=line.split()
            word=mylist[1]
            #print(word)
            mydict[word]=mydict.get(word,0)+1
#print(mydict)

bigcount=0
bigword=None

for eee,ccc in mydict.items():
    #print(eee,ccc)
    if bigcount==0 :
        bigcount=ccc
        bigword=eee
    else:
        if ccc > bigcount:
            bigcount=ccc
            bigword=eee
        else:
            continue
print(bigword,bigcount)


        