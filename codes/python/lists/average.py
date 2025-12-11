count=0
total=0
while True:
    num=input("Enter a number:")
    if num=="done":
        break
    try:
        num_1=float(num)
    except:
        print("Error:enter a valid input")
        quit()
    count=count+1
    total=total+num_1
print(total/count)
