#include <iostream>
#include <cstdlib>
using namespace std;
struct node{
    int data;
    struct node*next;

};

struct node *start=NULL;
struct node *ptr;
int val;

void display()
{
    ptr =start;
        while(ptr!=NULL) {
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL";

}

void createnode()
{
    cout<<"input insert value : ";
    cin>>val;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(start==NULL)
    start=newnode;
    else{
        ptr=start;
        while (ptr->next!=NULL)
        ptr=ptr->next;
        ptr->next=newnode;

    }
}
int main()
{
    int n;
    cout<<"number of nodes : ";
    cin>>n;
    for (int i=0; i<n;i++)
    {
        createnode();

    }


    cout<<"existing linked list : ";
    display();
    cout<<"\n new inserting a new value at last \n";
    createnode();
    cout<<"after insertion of nodes ";
    display();
    cout<<"\n free memory .....";
    ptr=start;
    while(ptr!=NULL)
    {
        struct node *nextnode=ptr->next;
        free(ptr);
        ptr=nextnode;

    }
    start=NULL;
    return 0;
    
}
