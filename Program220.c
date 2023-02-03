//         Singly Circular Linked List in C

// Create Class and Functions.
// Create returns of main functions.
// Insert First & Last.
// Delete First & Last.

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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)     // using temp
{
    PNODE temp = *First;

    if((*First == NULL) && (*Last == NULL))     // Empty LL
    {
        return;
    }
    else if(*First == *Last)        // Single node in LL
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else        // If LL contains more than 1 node
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
        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        free(temp->next);       // free(*Last);
        *Last = temp;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked List are : \n");

    do
    {
        printf(" | %d | -> ",First->data);
        First = First->next;
    } while (First != Last->next);
    printf(" NULL \n");
    
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
    printf("Number of InsertFirst Elements are : %d\n\n",iRet);

    InsertLast(&Head, &Tail, 50);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 60);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 70);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 80);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of InsertLast Elements are : %d\n\n",iRet);

    DeleteFirst(&Head, &Tail);
    Display(Head, Tail);
    
    iRet = Count(Head, Tail);
    printf("Number of DeleteFirst Elements are : %d\n\n",iRet);

    DeleteLast(&Head, &Tail);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of DeleteLast Elements are : %d\n\n",iRet);

    return 0;
}