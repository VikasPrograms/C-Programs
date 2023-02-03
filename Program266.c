// Accept from users singly linked list.

//          Singly Linked List in C.
// Insert First & Last
// Delete First & Last
// Insert At Position & Delete At Position.


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
    printf("Elements from the Linked List are : \t");

    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL \n");
}

int Count(PNODE First)
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

    if(*First == NULL)
    {
        return;
    }
    else if((*First) -> next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
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
    PNODE Head = NULL;
    int iChoice = 0, iPos = 0, iRet = 0, iNo = 0;

    printf("Welcome to the data structure application written by Vikas\n");

    while(1)
    {
        printf("------------------------------------------\n");

        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete new node at first position\n");
        printf("5 : Delete new node at last position\n");
        printf("6 : Delete new node at given position\n");
        printf("7 : Display the contents of Linked List\n");
        printf("8 : Count number of nodes from Linked List\n\n");

        printf("Please select the desired option : \t");

        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \t");
                scanf("%d",&iNo);

                InsertFirst(&Head, iNo);
                break;

            case 2:
                printf("Enter the data that you want to insert : \t");
                scanf("%d",&iNo);

                InsertLast(&Head, iNo);
                break;

            case 3:
                printf("Enter the data that you want to insert : \t");
                scanf("%d",&iNo);

                printf("Enter the position : \t");
                scanf("%d",&iPos);

                InsertAtPos(&Head, iNo, iPos);
                break;

            case 4:
                DeleteFirst(&Head);
                break;

            case 5:
                DeleteLast(&Head);
                break;

            case 6:
                printf("Enter the position : \t");
                scanf("%d",&iPos);

                DeleteAtPos(&Head, iPos);
                break;

            case 7:
                Display(Head);
                break;

            case 8:
                iRet = Count(Head);
                printf("Number of elements are : %d\n",iRet);
                break;

            case 9:
                printf("Thank you for using the application \n");
                return 0;

            default:
                printf("Invalid option\n");
                break;
        }

        printf("------------------------------------------\n");
    }

    return 0;
}