names=["Charles","patrick","james","matimu"]
#the for statement and lists are great pals(lists and definate loops)
for name in names:
    print("hi"+ " " +name+" " "how have you been") 
print("DONE!!!")

#to get at any element in a list we use the index specified in a square bracket format
print(names[0])

#lists are mutable meaning their content can be changed by use of the index operator
names[0]="John"
print(names)

#len function tells us the leangth of a list.. it actually tells us the number of iteams at any set of sequence
print(len(name))

#range() function gives back a range of numbers from zero to one less the parameter

for i in range(len(names)): #range() provides the iteration variable .
    #.in short range() can be used to provide for the indices of a list
    name=names[i]
    print("happy birthday ",name)

#lists concatenation involves using athe "+" operator
nick=["mach","jimmy"]
nickname=nick+names
print(nickname)

#they can also be sliced using the indices in square brakets:
print(names[2:])
""" print(dir(names)) """

#list method is used to create a list and the append method to put iteams in a list
   #use list() method to create a list and then use the append method to put things inside the loop..

units=list()
units.append("ODE")
units.append("CNT")
units.append("O.S")
units.append("Analogue Electronics")
print(units)

#in operator and not in operator
#they are boolean logical operators that help check wheather an item is in a list 

print("CNT" in units)#remember to use a double quotes when quoting the list element
print("calculu1" not in units)

#sort method arranges the list in an alphabetically
nickname.sort()  # you have to use the method before you can print it out
print(nickname)

#(min,max,sum ,len, are some other built in list functions)
#write a code that prompts the user to enter a number and then computes the avrage of the users input
 #program 1

count=0
total=0
while True:
    value=input("Enter a value:\n")
    
    if value == "Done":
        break
    try:
        value=int(value)
    except:
        print("error:invalid input\n please enter an a valid input")
        quit()

    count=count+1
    total=total+value
average=total/count
print(average)

