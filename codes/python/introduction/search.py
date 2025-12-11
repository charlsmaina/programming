fhand=open("conditions_1.py","r")
""" 
for line in fhand:
    line=line.strip()
    if line.startswith("if"):
        print(line)
     """
#in the above the startswith method is used to check wheather a particular line oin the file starts with "if"

for line in fhand:
    line=line.strip()
    if line.find("x")==-1: #find method is used to check the string that we are looking for.it looks for the string in the line and if the string is found prints the line
        continue
    print(line)
