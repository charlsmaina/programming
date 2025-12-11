import re

email=input("Whats your email?")

if re.search(r"^.+@.+\.com$",email):
    print("Valid")
else:
    print("Invalid")

