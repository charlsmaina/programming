#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 50

// Define struct for course details
struct Course {
    char courseName[MAX_LENGTH];
    int courseCode;
};

// Define struct for user details
struct User {
    char name[MAX_LENGTH];
    struct Course courseDetails;
};

// Function to display user details
void displayDetails(struct User user) {
    printf("Name: %s\n", user.name);
    printf("Course Name: %s\n", user.courseDetails.courseName);
    printf("Course Code: %d\n", user.courseDetails.courseCode);
}

int main() {
    struct User user;
    
    // Prompt user to enter details
    printf("Enter your name: ");
    fgets(user.name, MAX_LENGTH, stdin);
    user.name[strcspn(user.name, "\n")] = '\0'; // Remove newline character
    
    printf("Enter course name: ");
    fgets(user.courseDetails.courseName, MAX_LENGTH, stdin);
    user.courseDetails.courseName[strcspn(user.courseDetails.courseName, "\n")] = '\0'; // Remove newline character
    
    printf("Enter course code: ");
    scanf("%d", &user.courseDetails.courseCode);
    
    // Display user details
    printf("\nUser Details:\n");
    displayDetails(user);
    
    // Edit user details
    printf("\nDo you want to edit your details? (1 for yes, 0 for no): ");
    int choice;
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("\nWhich detail do you want to edit? (1 for name, 2 for course name, 3 for course code): ");
        int editChoice;
        scanf("%d", &editChoice);
        
        switch (editChoice) {
            case 1:
                printf("\nEnter new name: ");
                getchar(); // Clear input buffer
                fgets(user.name, MAX_LENGTH, stdin);
                user.name[strcspn(user.name, "\n")] = '\0'; // Remove newline character
                break;
            case 2:
                printf("\nEnter new course name: ");
                getchar(); // Clear input buffer
                fgets(user.courseDetails.courseName, MAX_LENGTH, stdin);
                user.courseDetails.courseName[strcspn(user.courseDetails.courseName, "\n")] = '\0'; // Remove newline character
                break;
            case 3:
                printf("\nEnter new course code: ");
                scanf("%d", &user.courseDetails.courseCode);
                break;
            default:
                printf("\nInvalid choice.\n");
                break;
        }
        
        // Display edited details
        printf("\nEdited User Details:\n");
        displayDetails(user);
    } else {
        printf("\nThank you.\n");
    }
    
    return 0;
}
