#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;/* data */
    struct node* next;
};
void traversal(struct node *ptr){
    while (ptr!=NULL)
    {
            printf("%d\n",ptr->data);
            ptr=ptr->next;
    }
    
}
int main(){
//  allocating memory for the nodes of linkde list in the heap
   struct node* head=(struct node*)malloc(sizeof(struct node));
   struct node* second=(struct node*)malloc(sizeof(struct node));
   struct node* third=(struct node*)malloc(sizeof(struct node));
   head->data=1;
   head->next=second; //linking first and second node
   second->data=2;
   second->next=third;  //linking second and third node
   third->data=3;
   third->next=NULL;   //terminating linked list
   traversal(head);
 return 0;
}