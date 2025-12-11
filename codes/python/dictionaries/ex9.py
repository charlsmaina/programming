fname=input("Enter filename:")
if len(fname)<1 :fname="clown.txt"
fhandle=open(fname)
my_dict=dict()
for line in fhandle:
    line=line.rstrip()
    my_list=line.split()
    for wds in my_list:
        my_dict[wds]=my_dict.get(wds,0)+1
print(my_dict)
bigcount=None
bigword=None

for www,ccc in my_dict.items():
    if bigcount is None or bigword is None:
        bigword=www
        bigcount=ccc
    else :
        if ccc>bigcount:
            bigcount=ccc
            bigword=www

print("bigword is : ",bigword )
print("with a frequency of: ",bigcount)


