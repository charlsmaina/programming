class Account:
    def __init__(self):
        self._balance=0

    @property
    def balance(self):
        return self._balance
    
    def deposit(self,number):
        self._balance += number

    def withdraw(self,number):
        self._balance -= number

def main():
    account=Account()
    print(f"Balance:{account.balance}")
    account.deposit(100)
    account.withdraw(50)
    print(f"Balance: {account.balance}")

if __name__ == "__main__":
    main()

    
