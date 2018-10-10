//C++ program for Reverse a Link-List

#include <iostream>
using namespace std;
struct node
{
    int info;
    node *next;
}*head=NULL;

void insert(int data)
{
    node *temp=new node;
    temp->info=data;
    temp->next=head;
    head=temp;

}

void reverse(node *p,node *c)
{
    if(c)
    {
        reverse(c,c->next);  //calling recursively
        c->next=p;
    }
    else
        head=p;

}
void display()
{
    node *temp=head;
    while(temp)
    {
        cout<<temp->info<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL";
}
int main()
{
    int data,n ;
    cout<<"Enter no. of nodes in  link-list = ";
    cin>>n;
    cout<<"Enter elements in link-list = ";
    for(int i=0; i<n; i++)
    {
        cin>>data;
        insert(data);
    }
    cout<<"\nGiven link-list:  \n";
    display();
    reverse(NULL,head);
    cout<<"\n\nreverse link-list:  \n";
    display();

    return 0;
}
