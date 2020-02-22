//6210450148 Yutithorn Kiengkailoet
#include <stdio.h>
#include <stdlib.h>
/* Struct Node */
typedef struct node
{ 
   int data;
   struct node *next;
}  Node;
/* Start Node*/
Node *head = NULL; // Global
/* Build Node */
void build_add_sort(int); //add & build
/* Print Node Data */
void print_node();
/* Main */
int main()
{
    int value;
    scanf("%d",&value); //first input
    while (value != -1) //condition break input
    {
        build_add_sort(value); //Call Funtions
        scanf("%d",&value); //input second and other vlaue
    }
    print_node();
}
/* End Main */

/* Funtions */
void build_add_sort(int value) //add & build
{   /* Build new Node */
    Node *new = malloc(sizeof(Node));
    Node *move; move = head; // move = head (start)
    new->next = NULL; new->data = value; //add value in new Node
    if (head == NULL) //first
    {head = new; return;} //break first Node
    /* Sort */
    while (move->next != NULL || (move->next == NULL && move->data >= value))
    {   /* Case add to head (1) */
        if (move == head && move->data >= value)
        {
            new->next = move; //newnode next = now Node
            head = new; //head change to new Node
            return;
        }
        /* Case normal (2) */
        else if (move->next->data >= value)
        {
            new->next = move->next;
            move->next = new;
            return;
        }
        move = move->next; //move Node
    }
    /* Case add to last (3) */
    move->next = new;
}

void print_node()
{
    /* Print */
    for ( ; head; head = head->next)
        printf("%d\n", head->data); // show data
}