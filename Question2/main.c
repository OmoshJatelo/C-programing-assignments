#include <stdio.h>
#include <stdlib.h>

int main() {
    int subject1, subject2, subject3;
    float average_marks;
    char surname[25];
    char choice;
    char adm_number[24];

    do{
        printf("Enter the following:\n");
        printf("Admission Number: ");
        scanf("%s", &adm_number);

        printf("Surname: \n");
        scanf("%s" ,&surname);

        printf("enter three subject marks:\n");
        scanf("%d %d %d", &subject1, &subject2, &subject3);

        average_marks = (subject1 + subject2 + subject3)/3.0;

        if(average_marks >= 70 && average_marks <= 100)
        {
            printf("Your grade is A\n");
        }
        else if(average_marks >= 60 && average_marks <= 69)
        {
            printf("Your grade is B\n");
        }
        else if(average_marks >= 50 && average_marks <= 59)
        {
            printf("Your grade is C\n");
        }
        else if(average_marks >= 40 && average_marks <= 49)
        {
            printf("Your grade is D\n");
        }
        else
        {
            printf("Your grade is E\n");
        }

        printf("Enter Y to continue to add another student and N to stop the progress:\n");
        scanf(" %c",&choice);
    }

    while(choice=='y'||choice=='Y');
    
    printf("\nExited the program successfully");
        
    return 0;
}
