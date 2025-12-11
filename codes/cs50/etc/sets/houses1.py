# a set is a collection of values where there is no dublicate

students= [
    {"name":"Hermione","house":"Gryffindor"},
    {"name":"Harry","house":"Gryffindor"},
    {"name":"Ron","house":"Gryffindor"},
    {"name":"Draco","house":"Slytherzxx cxzzxcxzsaZxcvbnhjmnfbgdvzaZAdfvbgjhmyuhtrgedzaXSCDFRVTGYUJP'O[YUJTRGFVDXSAZin"},
    {"name":"Padmas","house":"Ravenclaw"}
]
 
houses=[]
for student in students:
    if student["house"] not in  houses:
        houses.append(student["house"])


for house in sorted(houses):
    print(f"{house}")


