#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
};
struct node *even = NULL;
struct node *odd = NULL;
struct node *link = NULL;
struct node *list = NULL;
void insert(int data)
{
    struct node *link = (struct node*)malloc(sizeof(struct node));
    struct node *current;
    link->data=data;
    link->next=NULL;
    if(data%2==0){
     if(even==NULL){
        even=link;
        return;
     }else{
        current = even;
        while(current->next!=NULL)
        current=current->next;
        current->next=link;
    }
    }
    else{
         if(odd==NULL){
            odd = link;
            return;
         }else{
                current = odd;
                     while(current->next!=NULL)
                     current = current->next;
                       current->next = link;
          }
    }
}
void display(struct node *head)
{
    struct node *ptr = head;
    printf("[head]==>");
    while(ptr!=NULL){
        printf("%d=>",ptr->data);
        ptr = ptr->next;
    }
    printf("[NULL]\n");
}
void combine()
{
    struct node *link;
    list = even;
    link = list;
    while(link->next!=NULL){
        link =link->next;
    }
    link->next=odd;
}
int main()
{
    int i;
    for(i=1;i<10;i++)
      insert(i);
      printf("Even:");
      display(even);
      printf("odd :");
      display(odd);
      combine();
      printf("combined List:\n");
      display(list);
      return 0;
}