for _ in range(4):
    with open("occupations.txt","a") as fhand:
        occupation=input("What;s your occupation?:")
        fhand.write(f"{occupation}\n")
    
    
