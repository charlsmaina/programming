import re

email=input("Whats your email?")

if re.search(r"^\w+(\.\w+)*@(\w+\.)*\w+\.com$",email):
    print("Valid")
else:
    print("Invalid")