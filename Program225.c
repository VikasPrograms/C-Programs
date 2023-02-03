//          Doubly Circular Linked List in C.

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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))       // CLL is empty
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else            // If CLL contains single or multiple node
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))       // CLL is empty
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else            // If CLL contains single or multiple node
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int no, int ipos)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    int NodeCnt = 0, iCnt = 0;
    NodeCnt = Count(*First, *Last);

    if((ipos < 0) || (ipos > NodeCnt+1))
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
        PNODE temp = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if((*First == NULL) && (*Last == NULL))     // Empty node
    {
        return;
    }
    else if(*First == *Last)    //  Single node
    {
        free(*First);       // free(*Last);
        *First = NULL;
        *Last = NULL;       // *First = *Last = NULL;
    }
    else            // Multiple node
    {
        *First = (*First)->next;
        (*First)->prev = *Last;
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
        *First = *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free((*First)->prev);
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    int NodeCnt = 0, iCnt = 0;
    NodeCnt = Count(*First, *Last);

    if((ipos < 0) || (ipos > NodeCnt+1))
    {
        printf("Invalid Position \n");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(First, Last);
    }
    else if(ipos == NodeCnt + 1)
    {
        DeleteLast(First, Last);
    }
/*    else
    {
        PNODE temp = *First;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
*/
    else
    {
        PNODE temp1 = *First;
        PNODE temp2 = NULL;

        for(iCnt = 1; iCnt < ipos-1; iCnt++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
        temp1->next->prev = temp1;
    }
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked List is empty \n");
        return;
    }

    printf("Elements of the Linked List are : \n");
    do
    {
        printf("| %d | <=> ",First->data);
        First = First->next;
    } while (First != Last->next);
    printf("\n");
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
    printf("Number of nodes After InsertFirst is : %d\n\n",iRet);
    
    InsertLast(&Head, &Tail, 50);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 60);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 70);
    Display(Head, Tail);
    InsertLast(&Head, &Tail, 80);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes After InsertLast is : %d\n\n",iRet);

    InsertAtPos(&Head, &Tail, 45, 5);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes After InsertAtPos is : %d\n\n",iRet);

    DeleteFirst(&Head, &Tail);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes After DeleteFirst is : %d\n\n",iRet);

    DeleteLast(&Head, &Tail);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes After DeleteLast is : %d\n\n",iRet);

    DeleteAtPos(&Head, &Tail, 4);
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes After DeleteAtPos is : %d\n\n",iRet);

    return 0;
}