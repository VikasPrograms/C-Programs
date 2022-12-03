#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;           // NODE = 8
typedef struct node * PNODE;        // P means Pointer
typedef struct node ** PPNODE;      // PP means Pointer to Pointer

void InsertFirst(PPNODE First, int no)       // Call by Address Under
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)      // If Linked list is empty
    {
        *First = newn;
    }
    else        // If Linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;
    }
}

void InsertLast(PPNODE First, int no)       // Call by Address Under
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)      // If Linked list is empty
    {
        *First = newn;
    }
    else        // If Linked list contains atleast one node
    {

    }

}

void Display(PNODE First)   // Call by Value Under
{
    printf("Elements from the Linked List are : \n");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int main()
{
    // struct node * Head = NULL;
    PNODE Head = NULL;      // Head is a Pointer, NULL is defautl value

    // Call by Address
    InsertFirst(&Head, 51);     // InsertFirst(60, 51)  
    InsertFirst(&Head, 21);     // InsertFirst(60, 21)
    InsertFirst(&Head, 11);     // InsertFirst(60, 11)

    Display(Head);      // Call by value

    return 0;
}

/*
    // Call by address

    InsertFirst()
    InsertLast()
    InsertAt
*/