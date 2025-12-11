names=[]
with open("names.txt") as fhand:
    for line in fhand:
        names.append(line.rstrip())

for name in sorted(names):
    print(f"hello, {name}")
