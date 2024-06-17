#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void traversal(struct node*ptr){
while(ptr!=NULL){
printf("%d\n",ptr->data);
ptr=ptr->next;}
printf("\n");
}
struct node *insertatfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}
struct node* insertatindex(struct node*head,int data,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1){
         p=p->next;
         index++;}
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;}
struct node *insertatend(struct node*head,int data)
{   
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node*p=head;
    while (p->next!=NULL)
    {
       p=p->next;}
    p->next=ptr;
    ptr->next=NULL;
    return head;}
int main(){
struct node*head =(struct node*)malloc(sizeof(struct node));
struct node*second =(struct node*)malloc(sizeof(struct node));
struct node*third =(struct node*)malloc(sizeof(struct node));
head->data=1;
head->next=second;
second->data=2;
second->next=third;
third->data=3;
third->next=NULL;
traversal(head);
// head=insertatfirst(head,0);
insertatindex(head,1,0);
head=insertatend(head,4);
traversal(head);
return 0;
}
