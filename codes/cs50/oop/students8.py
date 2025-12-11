
class Student:
    def __init__(self,name,house):
        if not name:
            raise ValueError("Missing name")
        
        self.name=name
        self.house=house 
        

    def __str__(self):
        return f"{self.name} from {self.house}"
       
#properties -it is an attribute that has a more defensive mechanism put in place
#we use @property symbol allowing us to decorate functions
#decorators are used to modify functions

#Getter-gets the attributes

    @property
    def house(self):
        return self._house #returns the value of house
    

#Setter-sets the values

    @house.setter
    def house(self, house):
        if house not in ["Slytherin","Gryffindor","Ravenclaw","Hufflepuff"]:
            raise ValueError("Invalid house") 
        self._house=house

def main():
    student=get_student()
    
    print(student)
    

def get_student():
    name=input("Name: ")
    house=input("House: ")
 
    return Student(name,house)


if __name__ == "__main__":
    main()

