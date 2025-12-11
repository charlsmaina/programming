students=[]

with open("students1.csv") as fhand:
    for line in fhand:
        name,house=line.rstrip().split(",")
        student={"name":name,"house":house}

        students.append(student)

for student in sorted(students, key=lambda student:student["name"]):
    print(f"{student['name']} is in {student['house']}")
