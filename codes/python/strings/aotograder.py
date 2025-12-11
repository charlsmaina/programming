text = "X-DSPAM-Confidence:    0.8475"
pos_1=text.find(":")
num=text[pos_1+1:]

num=float(num.strip())
print(num)



