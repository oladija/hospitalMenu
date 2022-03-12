//This is a code to build an app for a doctor's office

#include <stdio.h>
#include <stdlib.h>

int main()
{   //Enter the list of options available to the patients
    printf("Welcome to the doctor's office\n");
    printf("Please enter an option from the list below\n");
    printf("press 1 to register (For first timers)\n");
    printf("Press 2 for Oncology\n");
    printf("Press 3 for Dermatology\n");
    printf("press 4 for Accidents and Emergencies\n"); 
    printf("press 5 to exit\n");

    //Declare the variable to store the user input
    int userInput;
    scanf("%d", &userInput);    

    switch(userInput)
    {
        case 1:
        {
            

            int restart;
            do
            {   
                getchar();
                printf("This is an option to add a patient to the hospital's database\n");   
                char name;
                char address;
                char postCode;
                char DOB, month;
                int day, year, choice;

                printf("please enter your name: ");
                scanf("%c", &name);

                getchar();
                printf("Please enter your address:\t");
                scanf("%c", &address);

                getchar();
                printf("Please enter your postcode:\t");
                scanf("%c", &postCode);

                getchar();
                printf("Please enter your date, month and year of birth (ddmmyyyy):\t");
                scanf("%d %d %d", &day, &month, &year);

                printf("Would you like to save? 1 = y, 2 = n: ");
                scanf("%d", &choice);

                if(choice == 1)
                {
                    printf("Welcome to XYZ Hospital, your details have been saved");
                }
                else
                {
                    choice = restart;
                }
            } while (restart == 2);
        }
        break;

        case 2:
        {
            printf("Welcome to the Oncology department\n");
        } 
        break;  

        case 3:
        {
            printf("Welcome to the Dermatology department\n");
        }
        break;

        case 4:
        {
            printf("Welcome to the Accidents and Emergencies department\n"); 
        }
        break;

        case 5:
        {
            getchar();
            printf("This option is going to take you out of the app\n"); 
        
            char q;
            printf("Would you like to save your entry before you exit? Y/N: \n");
            scanf("%c", &q);
        
            if (q == 'Y' || q == 'y')
            {
                printf("Saving......");
            }
            else if (q == 'N' || q == 'n')
            {
                printf("Please exit the main option\n");
            }
            else
            {
                printf("You have entered a wrong input");       
            }
        }
        break;

        default:
        {
            printf("You have entered a wrong input");
        }
    

    }
    
    
    getchar();
    return 0;
}
