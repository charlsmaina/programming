with open("students1.csv") as fhand:
    for line in fhand:
        name, house =  line.rstrip().split(",")
        print(f"{name} lives in {house}")