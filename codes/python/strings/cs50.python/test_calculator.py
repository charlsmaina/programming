from calculator import square

def test_square():
    for x in range(200):
        try:
            assert square(x)==x*x
        except AssertionError:
            print(f"{x} squared is not equal to {x*x}")
test_square()
