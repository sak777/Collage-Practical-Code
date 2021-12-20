#include <iostream>
using namespace std;
class node
{
public:
    node *next;
    int data;
};
node *head = NULL;
class myclass
{
public:
    void creat_headnode();
    void incert_atend();
    void display();
    void insert_middle();
    void insert_front();
    void del_end();
    void del_middle();
    void del_front();
    void reverse();
};
void myclass::creat_headnode()
{
    if (head!=NULL)
    {
        cout<<"head node already exists "<<endl;
    }else{
        node *ne = new node;
        cout << "Enter data for head node :";
        cin >> ne->data;
        head = ne;
        ne->next = NULL;
    }   
}

void myclass::incert_atend()
{
    node *ne = new node;
    node *temp = new node;
    cout << "Enter your data to incert at end :";
    cin >> ne->data;
    temp = head;
    ne->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ne;
}

void myclass::display()
{
    if (head == NULL)
    {
        cout << "Link list is empty " << endl;
    }
    else
    {
        node *temp;
        temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void myclass::insert_middle(){
    node *ne = new node;
    cout<<"Enter data for incert ";
    cin>>ne->data;
    node *temp;
    temp=head;
    cout<<"Enter data after you want to incert element "<<endl;
    int x;
    cin>>x;
    while (temp->data!=x)
    {
        temp=temp->next;
    }
    ne->next=temp->next;
    temp->next=ne;
}

void myclass::insert_front(){
    node *ne = new node;
    cout<<"Enter data for new node :";
    cin>>ne->data;
    ne->next=head;
    head=ne;
}

void myclass::del_end(){
    node *temp, *prev;
    temp=head;
    while (temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}

void myclass::del_middle(){
    node *temp, *prev;
    cout<<"Enter data you want to delete frome node :";
    int x;
    cin>>x;
    temp=head;
    while (temp->data!=x)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);    
}

void myclass::del_front(){
    node *temp;
    temp=head;
    head=temp->next;
    free(temp);
}

void myclass::reverse(){
    int s[10], top = -1;
    node *temp;
    temp=head;
    while (temp!=NULL)
    {
        top++;
        s[top]=temp->data;
        temp=temp->next;
    }
    while (top!=-1)
    {
        cout<<s[top]<<" ";
        top--;
    } 
}

int main()
{
    myclass ob;
    int ans, ch;
    do
    {
        cout << "1 creat head node " << endl;
        cout << "2 incert at end" << endl;
        cout << "3 Display " << endl;
        cout << "4 incert at middle " << endl;
        cout << "5 incert at front" << endl;
        cout << "6 delet at end " << endl;
        cout << "7 delet at middle " << endl;
        cout << "8 delet at front " << endl;
        cout << "9 reverse linklist " << endl;
        cout << "Enter your choice :";
        cin >> ch;
        switch (ch)
        {
        case 1:
            ob.creat_headnode();
            break;
        case 2:
            ob.incert_atend();
            break;
        case 3:
            ob.display();
            break;
        case 4:
            ob.insert_middle();
            break;
        case 5:
            ob.insert_front();
            break;
        case 6:
            ob.del_end();
            break;
        case 7:
            ob.del_middle();
            break;
        case 8:
            ob.del_front();
            break;
        case 9:
            ob.reverse();
            break;
        }
        cout << "Do you want to continue :";
        cin >> ans;
    } while (ans == 1);
    return 0;
}
