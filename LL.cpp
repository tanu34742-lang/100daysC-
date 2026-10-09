#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

};

int main()
{
    struct node n3={30,NULL};
    struct node n2={20,&n3};
    struct node n1={10,&n2};

    struct node* start =&n1;
    cout<<"linkedlist is ";
    struct node *ptr=start;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;

    }

    cout<<"NULL"<<"\n";
    return 0;
}