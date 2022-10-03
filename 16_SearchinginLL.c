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

    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node*));
        t->data=A[i];
        t->next=NULL;
        last->next=NULL;
        last=t;
    }
}

struct Node * LSearch(struct Node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        return p;
        p=p->next;
    }
    return NULL;
}

int main()
{
    struct Node *temp;
    int A[]={2,4,6,8,10};
    create(A,5);
    temp=LSearch(first,2);
    if(temp)
    {
    printf("Key is found: %d",temp->data);
    }
    else
    {
    printf("Key is not found.");
    }
    return 0;
}