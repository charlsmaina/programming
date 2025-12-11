#inheritance-you can define multiple classes that are related
class Wizard:
    def __init__(self,name):
        if not name:
            print("Missing name")
        self.name=name


class Student(Wizard):
    def __init__(self,name,house):
        super().__init__(name)
        self.house=house

    def __str__(self):
            return f"{self.name} from {self.house}"
    
    @property
    def house(self):
         return self._house
    
    @house.setter
    def house(self,house):
         if house not in ["Gryffindor","Slytherin","Ravenclaw","Hafflepuff"]:
              raise ValueError("Invalid house")
         self._house=house 

class Profesor(Wizard):
    def __init__(self,name,subject):
        super().__init__(name)
        self.subject=subject

    def __str__(self):
            return f"{self.name} teaches {self.subject}"
        
student=Student(input("Name: "),input("House: "))
profesor=Profesor("Linus","Instrumentation")
print(student)
print(profesor)
