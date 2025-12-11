filename=input("Enter the file name:")
fhand=open(filename,"r")
count=0
total=0
for line in fhand :
    line=line.strip()
    if not line.startswith("X-DSPAM-Confidence:"):
        continue
  
    pos1=line.find(":")
    str1=line[pos1+1:]
    str1=str1.strip()
    num=float(str1)
    count=count+1
    total=total+num
average=total/count
print("Average spam confidence:",average)
    


    
    