
email=input("Enter email:").strip()
try:
    username,domain=email.split("@")
    if username and "." in domain:
        print("Valid")

except:
    print("Invalid")
