
largest = -10000
smallest = 10000
numbers = []
while True:
    num = input("Enter a number:")
    if num == 'done':
        break
    try:
        innum = int(num)
    except:
        print("invalid input")
        continue
    numbers.append(innum)
for number in numbers :
    if number < smallest:
        smallest = number
        
for number in numbers :        
    if  number > largest:
        largest = number

print("Maximum is",largest)  
print("minimum is",smallest)     


    
    
    

    


