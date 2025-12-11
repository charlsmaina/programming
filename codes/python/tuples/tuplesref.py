#tuples are a sequence of values much like a list..howerver the are immutable
#syntantically , a tuple is a comma separated list of values
#the built in function tuple() with no arguments creates an empty tuple
#when an argument is passed to the tuple()..the result of the call to  tuple is a sequence with elements of the tuple
tup1=tuple()

print(type(tup1))
(tup2,tup1)=('charles','maina')
print(tup1,tup2)

print((tup2))
#the result is comma separated characters of the string passed as an argument


#..tuples can be sorted by use of the sorted() function.
#..when you sort a tuple using the sorted function it returns a sorted list and not a tuple
#this is due to the fact that tuples are  immutable and to sort them you first need to convert the tuple to mutable forms.ie lists and then conver the list back to a tuple
#the slice operator and the index operator also works well in tuples

print(tup2[2:])

#comparison operators work with tuples and other sequences:
#python starts  by comparing the first element from each sequence ,if they are equal it goes on to the next element untill it finds elements that differ.Subsequent elements are not considered

#the sort function functions the same way in that it sorts based on the first element ,but incase of a tie it sorts on the second element and so on

fname=input("Enter filename: ") 
try:
    fhand=open(fname,"r")
except:
    print("**error:Enter a valid filename:")
mylist=list()
for line in fhand:
    line=line.strip()
    wds=line.split()
    
    for word in wds:
        mylist.append((len(word),word))#creates a list of tuples with each tuple having the length of word and the  word itself....its like a histogram.

print(sorted(mylist,reverse=True))
list2=list()
for v,k in mylist:
    list2.append(k)#creates a list only with "keys " only
print(sorted(list2,reverse=True))

newtup=tuple(mylist)# converts the list to a tuple
print(tuple(sorted(newtup,reverse=True)))#sorted() sorts the tuple by first converting it to a list and hence we use the tuple function to convert it back to a tuple.

