students=[]

with open("names.csv") as fhand:
    for line in fhand:
        name,career=line.rstrip().split(',')

        sibling={"name":"name","career":"career"}

        students.append(sibling)
        
#for student in students:
    #print(student)

def getName(sibling):
    return sibling["name"]

for sibling in students:
    print(f"{sibling['name']} is a {sibling['career']}")



        
        
        