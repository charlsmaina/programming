# a set is a collection of values where there is no dublicate

students= [
    {"name":"Hermione","house":"Gryffindor"},
    {"name":"Harry","house":"Gryffindor"},
    {"name":"Ron","house":"Gryffindor"},
    {"name":"Draco","house":"Slytherin"},
    {"name":"Padmas","house":"Ravenclaw"}
]
 
houses=set()
for student in students:
    houses.add(student["house"])

for house in sorted(houses):
    print(f"{house}")


