with open("occupations.txt") as fhand:
    for line in sorted(fhand,reverse=True):
        print(f"He is a/an {line.rstrip()}")
        