fhandle=open("mbox-short.txt","r")
for line in fhandle:
    line=line.rstrip()
    my_list=line.split()
    if len(my_list) < 1:
         continue
    elif my_list[0] != "From":
        #print("ignore:",line)
         continue

    print(my_list[2])

