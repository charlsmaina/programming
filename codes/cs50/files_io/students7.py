import csv

students=[]

with open("students1.csv") as fhand:
    reader=csv.DictReader(fhand)
    for row in reader:
        students.append({"name":row["name"],"house":row["house"]})

for student in sorted(students, key=lambda student:student["name"]):
    print(f"{student['name']} is in {student['house']}")


