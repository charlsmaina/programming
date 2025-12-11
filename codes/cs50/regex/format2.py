import re

name=input("Whats your name?").strip()

matches=re.search("^(.+), (.+)$", name)

if matches:
    first,last=matches.groups()
    name=f"{first} {last}"

print(f"hello {name}")

