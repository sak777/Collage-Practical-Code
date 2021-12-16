#include <iostream>
using namespace std;
class circularq{
    int q[5],f,r,x;
    public:
    circularq(){
        f=-1;
        r=-1;
    }
    void enq();
    bool isfull();
    bool isempty();
    void dq();
    void display();
};

bool circularq::isfull(){
    if(f==r+1 || f==0 && r==4)
    {
        return true;
    }
    else{
        return false;
    }
}

bool circularq::isempty(){
    if (f==-1 && r==-1)
    {
        return true;
    }
    else{
        return false;
    }
}

void circularq::enq(){
    cout<<"Enter a data to incert in queue :";
    cin>>x;
    if (f==-1 && r==-1)
    {
        f=(f+1)%5;
    }
    r=(r+1)%5;
    q[r]=x;
}

void circularq::dq(){
    cout<<"Deleted item is :"<<q[f]<<endl;
    if (r==f)
    {
        f=-1;
        r=-1;
    }
    else{
        f=(f+1)%5;
    }
    
    
}

void circularq::display(){
    int i;
    for (i = f; i != r; i = (i+1)%5)
    {
        cout<<q[i]<<" ";
    }
    cout<<q[i]<<endl;
    
}


int main(){
    circularq ob;
    int ans, ch;
    do{
        cout<<"1 Incert item at queue "<<endl;
        cout<<"2 Delete item from queue "<<endl;
        cout<<"3 Display queue "<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:
                if (ob.isfull())
                {
                    cout<<"Queue is full "<<endl;
                }
                else{
                    ob.enq();
                }
                break;

            case 2:
                if (ob.isempty())
                {
                    cout<<"Queue is empty "<<endl;
                }
                else{
                    ob.dq();
                }
                break;

            case 3:
                if (ob.isempty())
                {
                    cout<<"Queue is empty "<<endl;
                }
                else{
                    ob.display();
                }
                break;
        }
    cout<<"Do you want to continue :";
    cin>>ans;
    }while(ans==1);
    return 0;
}