#include<stdio.h>

int No1 = 11;           // Initialised global variable

int No2;                // Non initialised global variable

static int A = 10;      // Initialised static global variable

static int B;           // Non Initialised static global variable

// Function Defination
void Demo()
{
        int X = 10;
        static int Y = 20;
        printf("Inside Demo\n");
}

//BSS : Block Starting with Symbol        // Non initialised global

//Non BSS : Block starting with Value     // Initialised global