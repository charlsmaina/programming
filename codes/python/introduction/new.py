def calculate_rectangle_area(length, width):
    area = length * width
    return area

# Get user input for length and width
length_input = float(input("Enter the length of the rectangle: "))
width_input = float(input("Enter the width of the rectangle: "))

# Calculate and display the area of the rectangle
area_result = calculate_rectangle_area(length_input, width_input)
print("The area of the rectangle is:", area_result)