#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void display();
struct node
{
  int info;
  struct node *link;
}*start=NULL;

int main(void)
{
  setbuf(stdout, NULL);
  int data;
  int ch;
  struct node *q;
  struct node *tmp;
  do
  {
    printf("Enter Elemets:\n");
    scanf("%d", &data);
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->info=data;
    tmp->link=NULL;
    if(start==NULL)
      start=tmp;
    else
    {
        q=start;
        while(q->link!=NULL)
        q=q->link;
        q->link=tmp;
    }  
    printf("Do you want insrt more elements?\n1.insert\n2.display all elements in list\n\n");
    scanf("%d", &ch);
  } while (ch==1);
display();
return 0;
}
void display()
{
  struct node *q;
  if(start==NULL)
    printf("List is Empty||\n");
  else
  {
     printf("*****Elements in linked list******\n");
     q=start;
     while(q!=NULL)
     {
        printf("%d\t",q->info);
        q=q->link;
     }
  }  
}