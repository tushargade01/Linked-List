/*program 3.3*/
/*program for creation and display of static linked list*/
#include<stdio.h>
#include<conio.h>
void display();
struct node
{
    int info;
    struct node *link;
};
int main()
{
    struct node n4={40,NULL};
    struct node n3={30,&n4};
    struct node n2={20,&n3};
    struct node n1={10,&n2};
    struct node* start=&n1;
    setbuf(stdout, NULL);
    printf("\n\t****Elements of the Linked List****\n");
    struct node *q=start;
    while(q!=NULL)
    {
        printf("%d\t",q->info);
        q=q->link;
    }
}
