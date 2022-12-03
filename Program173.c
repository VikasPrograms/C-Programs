#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;           //  4 byte
    struct node *next;      // 4
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
    PNODE temp = *First;

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)      // If Linked list is empty
    {
        *First = newn;
    }
    else        // If Linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
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

int Count(PNODE First)   // Call by Value Under
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)      // A --- // empty LL
    {
        return;
    }
    else if((*First) -> next == NULL)       // B --- // 1 node in LL
    {
        free(*First);
        *First = NULL;
    }
    else        // C --- // more than 1 node in LL
    {
        (*First) = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = *First;

    if(*First == NULL)      // A --- // empty LL
    {
        return;
    }
    else if((*First) -> next == NULL)       // B --- // 1 node in LL
    {
        free(*First);
        *First = NULL;
    }
    else        // C --- // more than 1 node in LL
    {
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp -> next = NULL;
    }
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    NodeCnt = Count(*First);        // *First = 100

    if((ipos < 1) || (ipos > (NodeCnt + 1)))    // 1> ipos <7
    {
        printf("Invalid Position  \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, no);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(First, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;

        for(iCnt = 1; iCnt < ipos - 1; iCnt++)
        {
            temp = temp -> next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE First, int ipos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int NodeCnt = 0, iCnt = 0;
    
    NodeCnt = Count(*First);        // *First = 100

    if((ipos < 1) || (ipos > NodeCnt))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First);
    }
    else
    {
        temp1 = *First;
        
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;        // this line indicates 500 address

        temp1->next = temp2->next;      // temp1->next = temp1->next->next;
        free(temp2);
    }
}

int main()
{
    // struct node * Head = NULL;
    PNODE Head = NULL;      // Head is a Pointer, NULL is defautl value
    int iRet = 0;

    // Call by Address
    InsertFirst(&Head, 51);     // InsertFirst(60, 51)  
    Display(Head);      // Call by value

    InsertFirst(&Head, 21);     // InsertFirst(60, 21)
    Display(Head);      // Call by value

    InsertFirst(&Head, 11);     // InsertFirst(60, 11)
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After InsertFirst are : %d\n\n",iRet);

    InsertLast(&Head, 101);
    Display(Head);      // Call by value

    InsertLast(&Head, 111);
    Display(Head);      // Call by value

    InsertLast(&Head, 121);
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After InsertLast are : %d\n\n",iRet);

    InsertAtPos(&Head, 105, 5);
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After InsertAtPos are : %d\n\n",iRet);

    DeleteAtPos(&Head, 5);
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After DeleteAtPos are : %d\n\n",iRet);

    DeleteFirst(&Head);
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After DeleteFirst are : %d\n\n",iRet);

    DeleteLast(&Head);
    Display(Head);      // Call by value

    iRet = Count(Head);
    printf("Number of nodes After DeleteLast are : %d\n\n",iRet);

    return 0;
}

/*
    // Call by address

    InsertFirst()
    InsertLast()
    InsertAtPosition()
    DeleteFirst()
    DeleteLast()
    DeleteAtPosition()
*/