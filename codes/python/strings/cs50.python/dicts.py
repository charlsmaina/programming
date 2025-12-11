names={
    "charles":"Engineer",
    "James":"Doctor",
    "Joe":"Surveyor",
    "Monica":"Teacher"
       }
for name in names:
    print(name,names[name],sep=(", "))

print("^*****************************^")
siblings=[
    {"name":"Charles","gender":"Male","Age":"22","Career":"Engineer"},
    {"name":"James","gender":"Male","Age":"9","Career":"Doctor"},
    {"name":"Joe","gender":"Male","Age":"15","Career":"Surveyor"},
    {"name":"Monica","gender":"Female","Age":"35","Career":"Teacher"}

]
for sibling in siblings:
    print(sibling["name"], sibling["gender"], sibling["Age"], sibling["Career"], sep=", ")