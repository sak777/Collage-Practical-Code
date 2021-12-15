#include <iostream>
using namespace std;
class linearq{
    int q[5], f, r;
    public:
    linearq(){
        f=-1;
        r=-1;
    }
    bool isfull();
    bool isempty();
    void enq();
    void show();
    void dq();
};

bool linearq::isfull(){
    if (r==4)
    {
        return true;
    }
    else{
        return false;
    }
}

bool linearq::isempty(){
    if (f==-1 && r==-1 || f>r)
    {
        return true;
    }
    else{
        return false;
    }
}

void linearq::enq(){
    int x;
    cout<<"Enter data for enque ";
    cin>>x;
    if(f==-1 && r==-1)
    {
        f++;
    }
    r++;
    q[r]=x;
}

void linearq::dq(){
    cout<<"Deleted item is "<<q[f]<<endl;
    f++;
}

void linearq::show(){
    for (int i = f; i <= r; i++)
    {
        cout<<q[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int ch, ans;
    linearq ob;
    do{
        cout<<"1 Enq "<<endl;
        cout<<"2 Display  "<<endl;
        cout<<"3 dq "<<endl;
        cout<<"enter your choice ";
        cin>>ch;
        switch(ch){
            case 1:
                if (ob.isfull())
                {
                    cout<<"queue id full "<<endl;
                }
                else{
                    ob.enq();
                }
                break;    

            case 2:
                if (ob.isempty())
                {
                    cout<<"queue is empty "<<endl;
                }
                else{
                    ob.show();
                }
                break;

            case 3:
                if (ob.isempty())
                {
                    cout<<"queue is empty "<<endl;
                }
                else{
                    ob.dq();
                }
                break;
        }
    cout<<"Do you want to continue(0,1) ";
    cin>>ans;
    }while(ans==1);
    return 0;
}