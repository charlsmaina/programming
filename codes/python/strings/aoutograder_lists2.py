fhand=open("mbox-short.txt","r")
count=0
for line in fhand :
    if not line.startswith("From"):#eliminates lines that do not start with "From"
        continue

    elif  line.startswith("From:"):#eliminates lines that start with "From:"
            continue
    else:
            lst=line.split()
            det=lst[1]
            count=count+1
            print(det)
       
print("There were", count, "lines in the file with From as the first word")
    

    
