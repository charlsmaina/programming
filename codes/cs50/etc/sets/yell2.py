def main():
    yell(input("Whats your name:"))

def yell(*words):
    uppercased=map(str.upper,words)
    ##for word in words:
        #uppercased.append(word.upper())
    print(*uppercased)

#map function allows you to apply some functionality to every element of a sequence

if __name__=="__main__":
    main()
