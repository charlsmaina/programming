def meow(no: int) -> None:#hints the return value of the function
    return "meow\n" * no
    """
    Meow n times
    :param no: Number to meow
    :type no: int
    :raise typeError: If no is not an interger
    :return:a string of no meows, one per line
    :rtype:str
    
    """
    #the above reps a documentation (docstrings)
     




number: int=int(input("Number: ")) #type hint  
meows=meow(number)
print(meows,sep="")
