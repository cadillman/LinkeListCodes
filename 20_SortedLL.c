#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first=(struct Node*)malloc(sizeof(struct Node*));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++);
    {
        t=(struct Node*)malloc(sizeof(struct Node*));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

int count(struct Node *p)
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int isSorted(struct Node *p)
{
    int x;
    while(p!=NULL)
    {
        if(p->data < x)
        {return 0;}
        x=p->data;
        p=p->next;
    }
    return 1;
}

int main()
{
    int A[]={2,4,6,8,10};
    create(A,5);
    printf("%d\n",isSorted(first));
    display(first);
    return 0;
}