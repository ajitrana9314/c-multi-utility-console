#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

void clearInputBuffer()
{
    int ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
    }
}

void removeNewLine(char str[])
{
    str[strcspn(str, "\n")] = '\0';
}

int main()
{
    int choice;

    printf("\n\t\t\tWELCOME TO\n");
    printf("\t\tMY FIRST MINI PROJECT\n");

    do
    {
        printf("\n==================================================\n");
        printf("\t\t\tMAIN MENU\n");
        printf("==================================================\n");

        printf("1. BIO-DATA\n");
        printf("2. ATM\n");
        printf("3. FIND AREA OF GEOMETRICAL SHAPE\n");
        printf("4. FIND VOLUME OF GEOMETRICAL SHAPE\n");
        printf("5. CALCULATOR\n");
        printf("6. TYPE CASTING\n");
        printf("7. CHECK NUMBER EVEN AND ODD\n");
        printf("0. EXIT\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        clearInputBuffer();

        switch (choice)
        {
            case 1:
            {
                char name[50];
                char fathers_name[50];
                char mothers_name[50];
                char qualification[50];
                char email[70];
                char village[50];

                int d, m, y, age;
                float height;
                char contact[20];

                printf("\n\t\t** BIO-DATA **\n");

                printf("Enter your name: ");
                fgets(name, sizeof(name), stdin);
                removeNewLine(name);

                printf("Enter your father's name: ");
                fgets(fathers_name, sizeof(fathers_name), stdin);
                removeNewLine(fathers_name);

                printf("Enter your mother's name: ");
                fgets(mothers_name, sizeof(mothers_name), stdin);
                removeNewLine(mothers_name);

                printf("Enter your village name: ");
                fgets(village, sizeof(village), stdin);
                removeNewLine(village);

                printf("Enter date of birth (DD MM YYYY): ");
                scanf("%d %d %d", &d, &m, &y);
                clearInputBuffer();

                printf("Enter height: ");
                scanf("%f", &height);
                clearInputBuffer();

                printf("Enter age: ");
                scanf("%d", &age);
                clearInputBuffer();

                printf("Enter qualification: ");
                fgets(qualification, sizeof(qualification), stdin);
                removeNewLine(qualification);

                printf("Enter contact number: ");
                fgets(contact, sizeof(contact), stdin);
                removeNewLine(contact);

                printf("Enter email ID: ");
                fgets(email, sizeof(email), stdin);
                removeNewLine(email);

                printf("\n========== YOUR DETAILS ==========\n");

                printf("Name           : %s\n", name);
                printf("Father's Name  : %s\n", fathers_name);
                printf("Mother's Name  : %s\n", mothers_name);
                printf("Village        : %s\n", village);
                printf("DOB            : %02d-%02d-%04d\n", d, m, y);
                printf("Height         : %.2f\n", height);
                printf("Age            : %d\n", age);
                printf("Qualification  : %s\n", qualification);
                printf("Contact        : %s\n", contact);
                printf("Email          : %s\n", email);

                break;
            }

            case 2:
            {
                int pin, atmChoice;
                double balance = 10000.0;
                double amount;

                printf("\n\t\t** ATM **\n");

                printf("Enter last four digits of PIN: ");
                scanf("%d", &pin);

                if (pin < 1000 || pin > 9999)
                {
                    printf("Invalid PIN!\n");
                    break;
                }

                printf("\n1. Balance Inquiry\n");
                printf("2. Deposit Money\n");
                printf("3. Withdraw Money\n");
                printf("4. Manager\n");

                printf("Enter ATM choice: ");
                scanf("%d", &atmChoice);

                switch (atmChoice)
                {
                    case 1:
                        printf("Balance = Rs. %.2f\n", balance);
                        break;

                    case 2:
                        printf("Enter deposit amount: ");
                        scanf("%lf", &amount);

                        if (amount > 0)
                        {
                            balance += amount;
                            printf("Deposit successful!\n");
                            printf("Balance = Rs. %.2f\n", balance);
                        }
                        else
                        {
                            printf("Invalid amount!\n");
                        }
                        break;

                    case 3:
                        printf("Enter withdrawal amount: ");
                        scanf("%lf", &amount);

                        if (amount > balance)
                        {
                            printf("Insufficient balance!\n");
                        }
                        else if (amount <= 0)
                        {
                            printf("Invalid amount!\n");
                        }
                        else
                        {
                            balance -= amount;
                            printf("Withdrawal successful!\n");
                            printf("Balance = Rs. %.2f\n", balance);
                        }
                        break;

                    case 4:
                        printf("Please meet with the Manager.\n");
                        break;

                    default:
                        printf("Invalid ATM choice!\n");
                }

                break;
            }

            case 3:
            {
                int areaChoice;

                printf("\n\t\t** AREA CALCULATOR **\n");
                printf("1. Triangle\n");
                printf("2. Rectangle\n");
                printf("3. Right Angle Triangle\n");
                printf("4. Circle\n");

                printf("Enter choice: ");
                scanf("%d", &areaChoice);

                switch (areaChoice)
                {
                    case 1:
                    {
                        float base, height;

                        printf("Enter base and height: ");
                        scanf("%f %f", &base, &height);

                        printf("Area = %.2f\n",
                               0.5f * base * height);
                        break;
                    }

                    case 2:
                    {
                        float length, width;

                        printf("Enter length and width: ");
                        scanf("%f %f", &length, &width);

                        printf("Area = %.2f\n",
                               length * width);
                        break;
                    }

                    case 3:
                    {
                        float base, height;

                        printf("Enter base and height: ");
                        scanf("%f %f", &base, &height);

                        printf("Area = %.2f\n",
                               0.5f * base * height);
                        break;
                    }

                    case 4:
                    {
                        float radius;

                        printf("Enter radius: ");
                        scanf("%f", &radius);

                        printf("Area = %.2f\n",
                               PI * radius * radius);
                        break;
                    }

                    default:
                        printf("Invalid area choice!\n");
                }

                break;
            }

            case 4:
            {
                int volumeChoice;

                printf("\n\t\t** VOLUME CALCULATOR **\n");
                printf("1. Cone\n");
                printf("2. Cylinder\n");
                printf("3. Sphere\n");
                printf("4. Hemisphere\n");

                printf("Enter choice: ");
                scanf("%d", &volumeChoice);

                switch (volumeChoice)
                {
                    case 1:
                    {
                        double r, h;

                        printf("Enter radius and height: ");
                        scanf("%lf %lf", &r, &h);

                        printf("Volume = %.2lf\n",
                               (PI * r * r * h) / 3);
                        break;
                    }

                    case 2:
                    {
                        double r, h;

                        printf("Enter radius and height: ");
                        scanf("%lf %lf", &r, &h);

                        printf("Volume = %.2lf\n",
                               PI * r * r * h);
                        break;
                    }

                    case 3:
                    {
                        double r;

                        printf("Enter radius: ");
                        scanf("%lf", &r);

                        printf("Volume = %.2lf\n",
                               (4.0 / 3.0) * PI * r * r * r);
                        break;
                    }

                    case 4:
                    {
                        double r;

                        printf("Enter radius: ");
                        scanf("%lf", &r);

                        printf("Volume = %.2lf\n",
                               (2.0 / 3.0) * PI * r * r * r);
                        break;
                    }

                    default:
                        printf("Invalid volume choice!\n");
                }

                break;
            }

            case 5:
            {
                int calcChoice;

                printf("\n\t\t** CALCULATOR **\n");
                printf("1. Addition\n");
                printf("2. Subtraction\n");
                printf("3. Multiplication\n");
                printf("4. Division\n");
                printf("5. Modulus\n");

                printf("Enter choice: ");
                scanf("%d", &calcChoice);

                switch (calcChoice)
                {
                    case 1:
                    {
                        double a, b;

                        printf("Enter two numbers: ");
                        scanf("%lf %lf", &a, &b);

                        printf("Addition = %.2lf\n", a + b);
                        break;
                    }

                    case 2:
                    {
                        double a, b;

                        printf("Enter two numbers: ");
                        scanf("%lf %lf", &a, &b);

                        printf("Subtraction = %.2lf\n", a - b);
                        break;
                    }

                    case 3:
                    {
                        double a, b;

                        printf("Enter two numbers: ");
                        scanf("%lf %lf", &a, &b);

                        printf("Multiplication = %.2lf\n", a * b);
                        break;
                    }

                    case 4:
                    {
                        double a, b;

                        printf("Enter two numbers: ");
                        scanf("%lf %lf", &a, &b);

                        if (b == 0)
                            printf("Cannot divide by zero!\n");
                        else
                            printf("Division = %.2lf\n", a / b);

                        break;
                    }

                    case 5:
                    {
                        int a, b;

                        printf("Enter two integers: ");
                        scanf("%d %d", &a, &b);

                        if (b == 0)
                            printf("Cannot use zero!\n");
                        else
                            printf("Modulus = %d\n", a % b);

                        break;
                    }

                    default:
                        printf("Invalid calculator choice!\n");
                }

                break;
            }

            case 6:
            {
                int castChoice;

                printf("\n\t\t** TYPE CASTING **\n");
                printf("1. ASCII to Character\n");
                printf("2. Character to ASCII\n");
                printf("3. ASCII Range\n");

                printf("Enter choice: ");
                scanf("%d", &castChoice);

                switch (castChoice)
                {
                    case 1:
                    {
                        int ascii;

                        printf("Enter ASCII value: ");
                        scanf("%d", &ascii);

                        if (ascii >= 0 && ascii <= 255)
                            printf("Character = %c\n", (char)ascii);
                        else
                            printf("Enter value between 0 and 255.\n");

                        break;
                    }

                    case 2:
                    {
                        char ch;

                        clearInputBuffer();

                        printf("Enter character: ");
                        scanf("%c", &ch);

                        printf("ASCII = %d\n", (int)ch);

                        break;
                    }

                    case 3:
                    {
                        int lower, upper, i;

                        printf("Enter lower limit: ");
                        scanf("%d", &lower);

                        printf("Enter upper limit: ");
                        scanf("%d", &upper);

                        if (lower < 0 || upper > 255 || lower > upper)
                        {
                            printf("Invalid range!\n");
                        }
                        else
                        {
                            for (i = lower; i <= upper; i++)
                            {
                                printf("%3d = %c\n",
                                       i, (char)i);
                            }
                        }

                        break;
                    }

                    default:
                        printf("Invalid choice!\n");
                }

                break;
            }

            case 7:
            {
                int number;

                printf("\n\t\t** EVEN / ODD **\n");

                printf("Enter number: ");
                scanf("%d", &number);

                if (number % 2 == 0)
                    printf("%d is EVEN.\n", number);
                else
                    printf("%d is ODD.\n", number);

                break;
            }

            case 0:
                printf("\nThank you for using My First Mini Project!\n");
                break;

            default:
                printf("\nInvalid choice! Please choose 0-7.\n");
        }

        /*
           Menu will repeat until user selects 0.
        */

        if (choice != 0)
        {
            printf("\nPress Enter to return to MAIN MENU...");
            clearInputBuffer();
            getchar();
        }

    } while (choice != 0);

    return 0;
}