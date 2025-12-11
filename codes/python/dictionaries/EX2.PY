fhandle=open("mbox-short.txt","r")
my_dict=dict()
for line in fhandle:
    if len(line)<3:
        continue
    elif line.startswith("From:"):
        continue
    else:
        if not "From" in line:
            continue
        else :
           # print(line)
            line=line.strip()
            my_list=line.split()
           # print(my_list[2])
            #for word[3] in my_list:
            my_dict[my_list[2]]=my_dict.get(my_list[2],0)+1
print(my_dict)


