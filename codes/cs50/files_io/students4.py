
students=[]
with open("students1.csv") as fhand:
    for line in fhand:
        name,house=line.rstrip().split(",")
        student={"name":name,"house":house}
        students.append(student)

def get_house(student):
    return student["house"]

for student in sorted(students, key=get_house, reverse=True):
    print(f"{student['name']} is in {student['house']}")
