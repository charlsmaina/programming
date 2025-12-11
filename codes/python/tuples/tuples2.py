#lists comprehensions..makes a dynamic list
fhand=open("words.txt","r")
dict1=dict()
for line in fhand:
    line=line.strip()
    list1=line.split()
    for word in list1:
        dict1[word]=dict1.get(word,0)+1
dict2=dict()
for k,v in dict1.items():
    if v<=1:
        continue
    else:
        dict2[k]=v
print(sorted([(v,k) for k,v in dict2.items()]))

    
