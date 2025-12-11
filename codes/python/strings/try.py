#name = input("Enter file name: ")
fhand=open("mbox-short.txt","r")
#fh = open(name)
count = 0
for line in fhand:
    if not 'From:' in line:
        continue
    else:
        line = line.split()
        name = line[1]
        count = count + 1
        print(name)

print("There were", count, "lines in the file with From as the first word")