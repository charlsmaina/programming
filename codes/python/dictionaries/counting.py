#counting through a file or a line

counts=dict()
line=input("Enter a line:")
words=line.split()

for word in words:
    counts[word]=counts.get(word,0)+1
print("counting...")
print(counts)

print("Done!!")

# the general pattern to count the words in a line of text is to split the lines to words using the split method then loop through the words and use a dictionary to track the count of each word independently