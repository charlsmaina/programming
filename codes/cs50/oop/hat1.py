import random
class Hat:
    def __init__(self):
        self.houses=["Gryffindor","Hufflepuff","ravenclaw","Slytherin"]
    
    def sort(self,name):
        print(f"{name}, is in  {random.choice(self.houses)}")

hat=Hat()
hat.sort("Harry") 

#classmethods-stores functionalities that are conceptually realted in aclass
#class variables-no self
 
