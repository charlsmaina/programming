class Student:
    def __init__(self,name,house):
        self.name=name
        self.house=house 
      
    def __str__(self):
        return f"{self.name} from {self.house}"
    
    @classmethod #can be called any time without creating an object first
    def get(cls):
        name=input("Name: ")
        house=input("House: ")
        return cls(name,house)  # returns a student object
    
    @property
    def name(self):
         return self._name
    @name.setter
    def name(self,name):
         if not name:
              raise ValueError("No name")
         else:
              self._name=name
         
    @property
    def house(self):
         return self._house
    @house.setter
    def house(self,house):
        if house not in ["Slytherin","Gryffindor","Ravenclaw","Hufflepuff"]:
            raise ValueError("Invalid house")
        self._house=house
              
def main():
        student=Student.get()
        print(student)
        #static methods
        
        
if __name__=="__main__":
    main()
