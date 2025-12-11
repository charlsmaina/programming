names=list()# list method uesd for creating a list
while True: #while loop(indefinate loop) allows us to capture different names
     
     name=input("Enter your name:\n")#input function enables us to capture input from the user
     names.append(name)#append method used to add users input to the list

     if name=="done": #enables us to complete capturing users input
         break# terminates the loop
        
print(names)#prints the list

for i in range(len(names)):#range provides the iteration variable(indices of the list) as it returns a range of values up to one less the parameter(len names----which is in this case the number of iteams in the lst)
     
     name=names[i]
     print(name)
#list can be sliced using the : operator
#the point to remember is that the second number is up to but not including
print(names[2:4])
     
#dir function is used to check all the available methods in a list