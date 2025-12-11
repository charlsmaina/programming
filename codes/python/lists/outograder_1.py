fn=input("Enter a filename:")#for prompting the user to enter the file name
fhand=open(fn,"r")#for creating  the file handle/or opening the file which we use to acess the contents of the file

big_lst=[]#for creating the final list
for line in fhand:#reads the lines in the file line by line
   # print(line)
    line=line.strip()
    lst=line.split()#splits the contents in each line and creates a list
    #print(lst)
    
    for word in lst:#for going through each word in the list
        #print(word)
        if word  in big_lst:#checks if a word is in the big_list
            continue
        else:
            big_lst.append(word)#for appending word into the list
            
big_lst.sort()#for in place sorting of the list
print(big_lst)




    
    