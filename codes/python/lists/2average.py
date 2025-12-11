numbers=list()
while True:
    num=input("Enter a number:")
    if num=="done":
        break
    try:
        num_1=float(num)
    except:
        print("Error:enter a valid input")
        quit()
    numbers.append(num_1)
print(sum(numbers)/len(numbers))
    