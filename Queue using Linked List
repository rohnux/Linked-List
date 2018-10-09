//C++ program for Queue using Linked List

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    node *next;

}*front=NULL,*rear=NULL,*ptr;

void insert(node *t,int data)
{
    if(front==NULL || rear==NULL)
    {
        t=new node;
        t->info=data;
        t->next=NULL;
        front=rear=t;

    }
    else
    {
        t= new node;
        t->info=data;
        t->next=NULL;
        rear->next=t;
        rear=t;
    }

}
void delete_node( node *t)
{
    if(t==NULL)
        cout<<"Underflow!!!";
    else
    {
        ptr=t;
        front =front ->next;
        delete ptr;


    }

}
void display(node *t)
{   cout<<"\n------------Linked List---------------\n";
    if(t==NULL)
        cout<<"Underflow!!!";
    while(t)
    {
        cout<<t->info<<"->";
        t=t->next;
    }
    cout<<"NULL"<<"\n";
}
int main()
{
    int data;
    int ch;
    cout<<"-------------MENU--------------\n";
    cout<<"1.Insertion in linked-queue\n";
    cout<<"2.Deletion in linked-queue\n";
    cout<<"3.Display\n";
    cout<<"4.Exit\n";
    while(1)
    {
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element in linked-queue:";
            cin>>data;
            insert(rear,data );
            break;
        case 2:
            delete_node(front);
            break;
        case 3:
            display(front);
            break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"/nEnter correct option\n";
            break;
        }
    }

    return 0;
}
