counts=dict()
fhand=input("Enter a file name:")
for line in fhand:
    words=line.strip().split()
    for word in words:
        counts[word]=counts.get(word,0)+1
bigword=None
bigcount=None
for word,count in counts.items():
    if bigcount==None or count>bigcount:
        bigword=word
        bigcount=count
print(bigword,bigcount)