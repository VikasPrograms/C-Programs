#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    // Logic
}

void Display(PNODE First)
{
    // Logic
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    return 0;
}

/*
    void InsertFirst(PPNODE First, int No)
    void InsertLast(PPNODE First, int No)
    void InsertAtPos(PPNODE First, int No, int Pos)

    void DeleteFirst(PPNODE First)
    void DeleteLast(PPNODE First)
    void DeleteAtPos(PPNODE First, int Pos)

    void Display(PNODE First)
    int Count(PNODE First)
*/

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

/*
    InsertFirst(&Head, 11)
    InsertLast(&Head, 11)
    InsertAtPose(&Head, 11, 5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPose(&Head, 5)

    Display(Head)
    Count(Head)
*/

/*
    Topic to read from C Programming for Data Structures :

        Premitive data types
        Size of all dta types
        Loops (while & for)
        Dynamic memory (malloc & calloc)
        Pointer and its types
        Pointer to pointer
        Call by value and call by address
        Structure declaration
        self referential structure
        Memory allocation of structure
        Direct and indirect accesing of struecture
        typedef and its use
*/