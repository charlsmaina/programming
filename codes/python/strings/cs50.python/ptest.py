from calculator import square
import pytest

for i in range(10):
    assert square(i)==i*i

with pytest.raises(TypeError):
    square("cat")


