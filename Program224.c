//          Doubly Circular Linked List in C. (HomeWork)

// Create Class and Functions.
// Create returns of main functions.
// Insert First & Last.
// Delete First & Last.
// InsertAtPosition & DeleteAtPosition.

#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free(temp);
        (*Last)->next = *First;
    }
}

void DeleteLast(PPNODE First, PPNODE Last)
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;        
    }
    else
    {
        while(temp->next->next != *First)
        {
            temp = temp->next;
        }
        free(temp->next);
        *Last = temp;
        (*Last)->next = *First;
    }
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    return iCnt;
}

void InsertAtPos(PPNODE First, PPNODE Last, int no , int ipos)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    int NodeCnt = 0, iCnt = 0;
    NodeCnt = Count(*First, *Last);

    PNODE temp = *First;

    if((ipos < 0) || (ipos > NodeCnt + 1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First, Last, no);
    }
    else if(ipos == NodeCnt + 1)
    {
        InsertLast(First, Last, no);
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        (*Last)->next = *First;

    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    PNODE temp1 = *First;
    PNODE temp2 = NULL;

    int NodeCnt = 0, iCnt = 0;
    NodeCnt = Count(*First, *Last);

    if((ipos < 0) || (ipos > NodeCnt + 1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == NodeCnt)
    {
        DeleteLast(First, Last);
    }
    else
    {
        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements from the Linked List are : \n");

    do
    {
        printf(" | %d | <=> ",First->data);
        First = First->next;
    } while (First != Last->next);
    printf("NULL \n");
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head, &Tail, 40);
    Display(Head, Tail);
    InsertFirst(&Head, &Tail, 30);
    Display(Head, Tail);
    InsertFirst(&Head, &Tail, 20);
    Display(Head, Tail);
    InsertFirst(&Head, &Tail, 10);
    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of Nodes After InsertFirst are : %d\n\n",iRet);

    InsertLast(&Head, &Tail, 50);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 60);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 70);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 80);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of Nodes After InsertLast are : %d\n\n",iRet);

    InsertAtPos(&Head, &Tail, 45, 5);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of Nodes After InsertAtPos are : %d\n\n",iRet);

    DeleteFirst(&Head, &Tail);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of Nodes After DeleteFirst are : %d\n\n",iRet);

    DeleteLast(&Head, &Tail);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of Nodes After DeleteLast are : %d\n\n",iRet);

    DeleteAtPos(&Head, &Tail, 4);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of Nodes After DeleteAtPos are : %d\n\n",iRet);

    return 0;
}