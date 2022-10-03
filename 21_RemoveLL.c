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
        last->next=t;
        last=t;
    }
}

void display(struct Node *p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
}

int count(struct Node *p)
{
    int l=0;
    {
        while(p)
        l++;
        p=p->next;
    }
    return l;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q=p->next;

    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=p->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }

}

int main()
{
    int A[]={2,4,4,6,6,8,10};
    create(A,7);

    RemoveDuplicate(first);

    display(first);
    printf("\n\n");
    return 0;
}