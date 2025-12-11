import random

class Hat:
    houses=["Gryffindor","Hufflepuff","ravenclaw","Slytherin"]

    @classmethod
    def sort(cls, name):
       print(f"{name}, is in  {random.choice(cls.houses)}")

Hat.sort("Harry")