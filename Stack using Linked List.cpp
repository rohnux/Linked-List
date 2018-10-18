//Implementing of Stack using Linked List

#include <bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    node *next;
}*top=NULL,*save=NULL;

void push(node *save,int data)
{
    if(save==NULL)
    {
        save=new node;
        save->info=data;
        save->next=NULL;
        top=save;
    }
    else
    {
        save=new node;
        save->next=top;
        save->info=data;
        top=save;
    }
}
void pop(node *t)
{
    if(top==NULL)
        cout<<"Underflow!!\n";
    else
    {
        t= top;
        top=top->next;
        delete t;
    }
}
void display(node *t)
{
    if(t==NULL)
    {
        cout<<"Underflow";
        return;
    }
    while(t)
    {
        cout<<t->info<<" ->";
        t=t->next;
    }
    cout<<"NULL";
}
int main()
{
    int data;
    int ch;
    cout<<"---------------Stack using link-list------------------";
    cout<<"\n1.Push elements in the linked-stack\n";
    cout<<"2.Display\n";
    cout<<"3.Pop elements from linked-stack\n";
    cout<<"4.Exit\n";
    while(1)
    {
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter data in linked-stack : ";
            cin>>data;
            push(top,data);
            break;
        case 2:
            cout<<"\nNow the linked-stack is : ";
            display(top);
            break;
        case 3:
            pop(top);
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}
