course_name=input("Enter course name: ")

match course_name:
    case "Engineering":
        print(f"{course_name} takes 5 years")
    case "Doctor":
        print(f"{course_name} takes 7 years")
    case "Lawyer":
        print(f"{course_name} takes 6 years")
    case "BCOM":
        print(f"{course_name} takes 4 years")
