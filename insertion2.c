#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insertion(int key, struct node *ptr)
{
    printf("Please enter the number you want to insert");
    scanf("%d",&key );
    printf("At which node do you want to enter the value");
    scanf("")
}

int main()

{
    int key;
    struct node *nodeno;
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    display(head);
    return 0;
}