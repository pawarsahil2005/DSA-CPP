#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};
void traverse(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr= ptr->next;
        
    }
}

int main()
{   struct node *head;
struct node *second;
struct node *third;
    head=new (struct node);
    second=new (struct node);
    third=new (struct node);

    head ->data=7;
    head ->next=second;

    second ->data=6;
    second ->next=third;

    third ->data=9;
    third ->next=NULL;

    traverse(head);

   // cout<< head -> data<<endl;

    return 0;
}