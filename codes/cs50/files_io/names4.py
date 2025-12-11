with open("occupations.txt","r") as fhand:
    for line in fhand:
        print("he is a/an " ,line.rstrip())