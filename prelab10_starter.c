/*
 * CS1050
 * Summer 2022
 * Prelab 10 Starter File
 * by Dilruba Parvin
 */

// includes
#include <stdio.h>
#include <ctype.h>

// Symbolic Constants
#define S1 "Science knows no country"
#define S2 "\n\t Because knowledge belongs      \tto\nhumanity."
#define S3 " and is    the   torch which illuminates the     world."
#define STRINGCOUNT 3

// Prototypes
char * KillWhiteSpace(char *s);

// Main
int main(void)
{
    char s[STRINGCOUNT][256]={S1,S2,S3};

    printf("**** Original Strings ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,s[i]);
    }

    printf("\n\n**** Strings without whitespace ****\n");
    for (int i=0;i<STRINGCOUNT;i++)
    {
        printf("#%d: %s\n",i,KillWhiteSpace(s[i]));
    }
}
