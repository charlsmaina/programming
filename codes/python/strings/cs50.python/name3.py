names=[]

for _ in range(3):
    names.append(input("What is your name ?"))

with open("names.txt","a") as fhand:
    for name in names:
        fhand.write(f"{name}\n")
    
    



