#include<stdio.h>
void display();
struct node
{
    int info;
    struct node *link;
};
struct node n4={40, NULL};
struct node n3={30, &n4};
struct node n2={20, &n3};
struct node n1={10, &n2};
struct node* start=&n1;
int main()
{
    int data;
    int flag=0;
    struct node *q;
    setbuf(stdout, NULL);
    printf("Linked List before deletion of specific node\n");
    display();
    printf("\n\nEnter the element to be searched:\n");
    scanf("%d", &data);
    q=start;
    while(q!=NULL)
    {
        if(q->info==data)
        {
            flag=1;
            printf("\n\tElemet found");
            break;
        }
        q=q->link;
    }
    if(flag==0)
    printf("\n\tElemet not found");

}

void display()
{
    struct node *q=start;
    while(q!=NULL)
    {
        printf("%d\t", q->info);
        q=q->link;
    }
}