
phone_lst=list()
def phonebook(tup1,number):
    
    
    print("Name:\n",tup1)
    print("Phone number:",number )
    phone_lst.append((tup1,number))

my_list=list()
while True:
     firstname=input("Enter your first name: ")
     if firstname=="done":
         break
     
     else:
        lastname=input("Enter your last name: ")
        no=input("Enter your phone number: ")
        tup2=(firstname,lastname)
        phonebook(tup2,no)
        
print(phone_lst)




"""  print(tup1)
        (t1,no)=(tup1,number)
        my_list.append((t1,no))
print(my_list)
for (ti,no) in my_list:
    print("name:\n",ti,)
    print("phonenumber:\n",no)



 """