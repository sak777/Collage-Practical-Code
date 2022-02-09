#include <iostream>
using namespace std;

class MyStack{
    int s[20];
    int top = -1;
    public:
        void Push();
        void Pop();
        void Dislay();
    };

void MyStack::Push(){
    if (top==20)
    {
        cout<<"Stack is full "<<endl;
    }
    else{
        top++;
        cout<<"Enter item :";
        cin>>s[top];
    }
    
}

void MyStack::Pop(){
    if (top==-1)
    {
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Poped item is "<<s[top]<<endl;
        top--;
    
    
    // this is code of stack
    
}

void MyStack::Dislay(){
    cout<<"Stack items are : ";
    for (int i = 0; i < top; i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main(){
    MyStack ob;
    int choice, ans;
    do
    {
        cout<<"1 Push "<<endl;
        cout<<"2 Pop "<<endl;
        cout<<"3 Display"<<endl;
        cout<<"Enter Your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            ob.Push();
            break;
        case 2:
            ob.Pop();
            break;
        case 3:
            ob.Dislay();
            break;
        }
    cout<<"Do you want to continue :";
    cin>>ans;
    } while (ans==1);
    
    return 0;
}

