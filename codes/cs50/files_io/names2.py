name=input("Whats your occupation ?:")

fhand=open("occupations.txt","a")
fhand.write(f"{name}\n")
fhand.close()