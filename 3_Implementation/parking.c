#include "parking.h"
/**
 * @file parking.c
 * @author Aishwarya
 * @brief Adding parking details and pakrking menu
 * @version 0.1
 * @date 2022-02-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */


int year, month, date, number, option, total, total1=0, total2=0, total3=0, total4=0, total5=0;
float time;
char ch;


/**
 * @brief Adding Information
 * 
 */
void car()
{
    FILE *car;
    car = fopen("car image.txt", "r");
    if(car==NULL)
    {
         printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(car))
        {
            ch = fgetc(car);
            printf("%c", ch);
        }
    }

}

/**
 * @brief Addition of Parking details
 * 
 */
void park_details()
{ 
    FILE *details;
    details = fopen("ParkDetails.txt", "r");
    if(details==NULL)
    {
          printf("FILE DOES NOT EXIST!!!!");
    }
    else
    {
        while(!feof(details))
        {
           ch = fgetc(details);
           printf("%c", ch);
        }
    }


} // End of Parking Details

/**
 * @brief Addition of Parking menu
 * 
 */
void menu()
{ 
    FILE *menu;
    menu = fopen("ParkMenu.txt", "r");
    if(menu==NULL)
    { 
        printf("FILE DOES NOT EXIST!");
    }
    else
    {
        while(!feof(menu))
        {
            ch=fgetc(menu);
            printf("%c", ch);
        }
    }

} // End of Parking Menu

/*

Compilation/ Build process:
    1) Preprocessing
        * Tool : cpp
        * Input is .c file
        * Removes comments
        * Substitute the content of header file
        * Preprocessors will be substituted in its place
            * #define
            * #include
            * #if
            * #else
            * #endif
        * Generates a Pure C Code
        * gcc -E <filename> or cpp <filename>
        * Output is .i file
    2) Compilation
        * Tool : gcc
        * Checks
            * Syntax check
            * Variable mapping
            * Semantics
                * 10 = A + 20;
            * Parenthesis matching
        * If all checks pass 
            * Then it generates assembly code - opcodes
        * gcc -S <c source filename> or " gcc -S <i source filename>
    3) Assembling 
        * Tool : as
        * Convert assembly code to Machine code - Object code
        * gcc -c <c source file> or as <assembly source file>
    4) Linking
        * Tool : Id
        * Address of external function (library, or other object files) is linked
            * Run time
            * Compile time
* Commands 
    * Check libraries - Idd a.out
    * compilation: gcc <filename> -o <own name>.out
        * .exe - Windows
        * .out - Linux
    * Symbol Table - nm <.o> or nm a.out
    * Size of Segments(Texts, date, bss) - size a.out
    * File size - ls -l a.out

* Memory Map
    * Content of a.out ?
    * Text or Code
    * Data - Global Variables
        * Initialized - Data
        * Uninitialized - BSS (Block Started by symbol)
    * Heap - Dynamic Variables
    * Stack Variables
        * Function Calls
* Functions
    * Passing
        * By Value
        * By Address
    * Returning 
        * By Value
        * By address
* Math on Lines of Code
    * 5 Member team
    * Each write 100 lines a day
    * 1 year  = 182500
* Multifile
    * More than 1 source code files
    * Features files, Application files, Library files, Utility files, Header files
*/

