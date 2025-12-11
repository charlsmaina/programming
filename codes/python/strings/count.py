str = 'X-DSPAM-Confidence: 0.8475 '
colon_pos=str.find(":")
print(colon_pos)
""" print(str.find(" ",colon_pos)) """
x=str[colon_pos+1:]
new_x=float(x)
print(x)
print(new_x)
print(type(new_x))