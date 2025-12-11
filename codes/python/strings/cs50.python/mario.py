
width=int(input("Enter size:"))
lenth=int(input("Enter leangth:"))
def main():
    for _ in range(width):
        row_print()

def row_print():
    print("#:#:#:#"*lenth)
main()
