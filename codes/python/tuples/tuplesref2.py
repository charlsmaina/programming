#tuples assignement
#it is possible to have a tuple on the left hand side and a sequence on the right hand side
date=[18,9,2023]# for assignment
(day,month,year)=date 

print(day,month,year)

fname=input("Enter filename: ")
fhand=open(fname,"r")

lst=list()
mydict=dict()
for line in fhand:

    line=line.strip()
    wds=line.split()

    for word in wds:
        lst.append(word)
print(lst)
for w in lst:
    mydict[w]=mydict.get(w,0)+1
print(mydict)

l=list()

for k,v in mydict.items():
    l.append((v,k))
    l.sort(reverse=True)
print(l)
