/*
Project name : Number system converterv 
Createed By : PAWAN SINGH ADHIKARI 
*/

#include<stdio.h>   // for input & output
#include<stdlib.h>  // for exit(0) function
#include<conio.h>   // for getch() function
#include<ctype.h>   // for isdigit() function
#include<math.h>    // for pow(2,0) function
#include<string.h>  // for strlen() function

//Define Constent KeyWords: for tracking user key press event (used in : HexaDecimal input validation)
#define ENTER 13
#define TAB 9 
#define BKSP 8

void welcomeScreen(void);   // Introduction Page & choice screen 
void exitScreen(void);      // Program end screen with credits
void screenCleaner(void);   // cleasrs the output screen and intput 
void userInput(int);        // takes the user input and validates for futher operations 
int disitchecker(int, int); // validates each digit if input number
void conversion_Title(void);// Title for all conversion outputs
void tryAgain(int);         // try Again window 

// Binary Conversion functions
void binary_decimal(long int);
void decimal_octal(long int);
void decimal_hexadecimal(long int);

// Decimal Conversion functions
void decimal_binary(long int);
void decimal_octal(long int);
void decimal_hexadecimal(long int);

//octal Conversion function 
void octal_binary(char []);
void octal_decimal(char []);
void octal_hexadecimal(char []);

// c-Program main function 
void main()
{
    welcomeScreen();
}

// Intero screen 
void welcomescreen()
{
    int choice;

label1:
    screenCleaner();
    printf("-------------------------------------------\n");
    printf(">>> Welcome to Number System Converter <<< \n");
    printf("-------------------------------------------\n");

    printf(">> Select Conversion Type: \n");
    printf("> 1. Binary Conversion \n");
    printf("> 2. Decimal Conversion \n");
    printf("> 3. Octal Conversion \n");
    printf("> 4. Hexadecimal Conversion \n");
    printf("> 5. Exit the Program \n\n");
    printf("Enter the number & Hit ENTER: ");
    scanf("%d", &choice);

    // passes the user input for conversion
    switch(choice)
    {
        case 1:
            userInput(1);
            break;
        case 2:
            userInput(2);
            break;
        case 3:
            userInput(3);
            break;
        case 4:
            userInput(4);
            break;
        case 5:
            userInput(5);
            break;
        default:
            printf("\nError: the number must be between 1 to 5\n");
            printf("Press any key to continue... \n");
            getch();
            goto label1;
    }
}

// program exit screen (credit page)
void exitScreen()
{
    screenCleaner();
    printf("---------------------------------------\n");
    printf(" >>> Creator: PAWAN SINGH ADHIKARI <<< \n");
    printf("---------------------------------------\n\n");

    printf("Instagarm : https://www.instagram.com/pawan_adhikari.0?igsh=cjlkMDlzNnRscXIz \n\n");

    exit(0);    // exit() function to close the program safely 
}

void screencleanner()
{
    system("cls"); //clears the output screen
    fflush(stdin);
}
