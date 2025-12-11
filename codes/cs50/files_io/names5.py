names=[]
with open("occupations.txt") as fhand:
    for line in fhand:
        names.append(line.rstrip())

for name in sorted(names):
    print(f"he is a/an {name}")
