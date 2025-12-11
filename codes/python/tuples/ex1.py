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
        w=wds[1]
        my_dict[w]=my_dict.get(w,0)+1
print(my_dict)
most_emails=None
c=None
for k,v in my_dict.items():
  if c==None or most_emails==None:
     c=v
     most_emails=k
  else:
      if v>c:
          c=v
          most_emails=k
print(most_emails,c)
    
  
      
  


