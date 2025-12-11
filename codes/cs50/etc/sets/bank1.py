balance=0

def main():
    deposit(100)
    withdraw(50)
    print(f"Balance:{balance}")
    print("hello world")

def deposit(number):
    global balance
    balance +=number

def withdraw(number):
    global balance
    balance -= number
    #comments




if __name__ == "__main__":
    main()