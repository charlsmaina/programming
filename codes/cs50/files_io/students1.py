with open("students1.csv") as fhand:
    for line in fhand:
        row =  line.rstrip().split(",")
        print(f"{row[0]} lives in {row[1]}")

