import csv
students=[]

with open("students1.csv") as fhand:
    reader=csv.reader(fhand)
    for name,house in reader:
        student={"name":name,"house":house}
        students.append(student)

for student in sorted(students,key=lambda student:student["name"]):
    print(f"{student['name']} is from {student['house']}")
