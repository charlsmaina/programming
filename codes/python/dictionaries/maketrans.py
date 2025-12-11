fname=input("Enter a file name: ")
try:
    fhand=open(fname,"r")
except:
    print("**Error:file could not be found in directory")
import string#imports a string module which contains a string constant string.punctuation that contains all stardard punctuation characters.

for line in fhand:
    #print(line)
    line=line.strip()
    my_translations=str.maketrans("","",string.punctuation)
    
    # the function str.maketrans()makes a translation table
    #the first two arguments are empty strings which indicate that we want to remove characters (delete them)
    #the string.punctuation contains all the characters we want to remove
    

    line=line.translate(my_translations)
    #we then apply the translation table to the line uing the translate method
   
    line=line.lower()
    print(line)