#include <stdio.h>

int main() {
    int n, i, choice;
    char name[50][50];
    int attendance[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name[i]);
        attendance[i] = 0;   // default Absent
    }

    do {
        printf("\n--- Student Attendance Manager ---\n");
        printf("1. Mark Attendance\n");
        printf("2. View Attendance\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nMark Attendance (1 = Present, 0 = Absent)\n");
                for(i = 0; i < n; i++) {
                    printf("%s: ", name[i]);
                    scanf("%d", &attendance[i]);
                }
                break;

            case 2:
                printf("\n--- Attendance Report ---\n");
                for(i = 0; i < n; i++) {
                    printf("%s : %s\n", name[i],
                           attendance[i] == 1 ? "Present" : "Absent");
                }
                break;

            case 3:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 3);

    return 0;
}