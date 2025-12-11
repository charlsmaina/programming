import re

url=input("URL:")

username=re.sub("https://twitter.com/","",url)
print(f"Username:{username}")