import csv

name=input("Whats your name?")
house=input("Input your home:")

with open("students2.csv","a") as fhand:
    write=csv.DictWriter(fhand,fieldnames=["name","house"])
    write.writerow({"name":name,"house":house})


    
    

    





   