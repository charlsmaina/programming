count=0
my_dict=dict()
my_list=[]

fhand=open("mbox-short.txt","r")
for line in fhand:
    line=line.strip()
    if len(line)<= 3:
        continue
    elif  line.startswith("From:"):
        continue
    elif not line.startswith("From"):
        continue
    else:
        #print(line)
        wds=line.split()
        w=wds[5]
       # print(w)
        w1=w[:2]
        my_dict[w1]=my_dict.get(w1,0)+1

for k,v in sorted(my_dict.items()):
    print(k,v)
