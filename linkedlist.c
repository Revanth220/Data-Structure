#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void insert(struct Node **head, int data)
{
    struct Node *newnode = (struct Node *)malloc (sizeof(struct Node));

    newnode ->
    data = data;
    newnode ->
    next= *head;

    *head = newnode;
}

void display (struct Node *node)
{
  printf ("\nLinked List: ");
  while (node != NULL)
    {
      printf ("%d ", node->data);
      node = node->next;
    }
  printf("\n");
}

void main()
{
    struct Node *head = NULL;
    insert(&head, 22);
    insert(&head, 33);
    insert(&head, 44);
    insert(&head, 55);
    insert(&head, 66);
    display(head);
}

