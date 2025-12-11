def count():
    count=0
    word=input("Enter any word:\n")
    letter_looking_for=input("Enter the letter you are looking for:\n")
    for letter in word:
        if letter==letter_looking_for:
            count=count+1
    print(count)
count()


