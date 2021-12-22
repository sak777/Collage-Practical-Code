#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
class myclass{
    public:
    void creat_head();
    void incert_end();
    void display();
    void incert_middle();
    void revers();
    void incert_front();
};

void myclass::creat_head(){
    node *ne = new node;
    cout<<"Enter data for head node :";
    cin>>ne->data;
    ne->next=NULL;
    ne->prev=NULL;
    if (head==NULL)
    {
        head=ne;
    }else{
        cout<<"head node is already exist "<<endl;
    }  
}

void myclass::incert_end(){
    node *ne = new node;
    cout<<"Enter data for node ";
    cin>>ne->data;
    node *prev, *temp;
    ne->next=NULL;
    temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ne;
    ne->prev=temp;
}

void myclass::display(){
    node *temp;
    if (head==NULL)
    {
        cout<<"DLL is empty "<<endl;
    }else{
        temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }   
}
 
void myclass::incert_middle(){
    node *ne = new node;
    node *temp;
    int x;
    cout<<"Enter data for new node ";
    cin>>ne->data;
    cout<<"after which node you want incert data ";
    cin>>x;
    temp=head;
    while (temp->data!=x)
    {
        temp=temp->next;
    }
    ne->next=temp->next;
    temp->next->prev=ne;
    temp->next=ne;
    ne->prev=temp;
}

// void myclass::revers(){
//     node *temp;
//     temp=head;
//     while (temp!=NULL)
//     {
//         temp=temp->next;
//     }

//     while (temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->prev;
//     }
// }

void myclass::incert_front(){
    node *ne = new node;
    cout<<"Enter data for add ";
    cin>>ne->data;
    ne->next=head;
    ne->prev=NULL;
    head->prev=ne;
    head=ne;
}
int main(){
    myclass ob;
    int ch, ans;
    do
    {
        
        cout<<"1 creat head node"<<endl;
        cout<<"2 incert data at end"<<endl;
        cout<<"3 display"<<endl;
        cout<<"4 incert data at middle "<<endl;
        cout<<"5 revers"<<endl;
        cout<<"6 incert data at front "<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            ob.creat_head();
            break;
        case 2:
            ob.incert_end();
            break;
        case 3:
            ob.display();
            break;
        case 4:
            ob.incert_middle();
            break;
        case 5:
            ob.revers();
            break;
        case 6:
            ob.incert_front();
            break;
        }
    cout<<"Do you want to continue :";
    cin>>ans;
    } while (ans==1);
    
    return 0;
}