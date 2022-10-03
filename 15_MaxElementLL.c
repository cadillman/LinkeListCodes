#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


int Max(struct Node *p)
{
    int max=;
    while(p!=NULL)
    {
        if(p->data=max)
        {
            max=p->data;
            p=p->next;
        }
    }
    return max;
}
int main()
{
    int A[]={2,4,6,8,10};
    create(A,5);
    printf("Maximum element is %d",Max(first));
    return 0;
}