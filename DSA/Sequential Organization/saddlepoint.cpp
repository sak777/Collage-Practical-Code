#include <iostream>
using namespace std;
class myclass{
    int a[3][3],big[3],small[3],min,max;
    public:
    void accept();
    void show();
    void saddle();
};

void myclass::accept(){
    int i,j;
    cout<<"Enter actual elements of a matrix :";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
}

void myclass::show(){
    cout<<"A matrix is"<<endl;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void myclass::saddle(){
    for (int i = 0; i < 3; i++)
    {
        big[i]=a[i][0];
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j]>big[i])
            {
                big[i]=a[i][j];
            }   
        }
    }

    min=big[0];
    for (int i = 0; i < 3; i++)
    {
        if (big[i]<min)
        {
            min=big[i]; 
        }
        
    }
    

    for (int i = 0; i < 3; i++)
    {
        small[i]=a[0][i];
        for (int j = 0; j < 3; j++)
        {
            if (a[j][i] < small[i])
            {
                small[i]=a[j][i];
            }
        }
    }

    max = small[0];
    for (int i = 0; i < 3; i++)
    {
        if (small[i]> max)
        {
            max=small[i];
        }
        
    }

    if (max==min)
    {
        cout<<"their is saddle point "<<max<<endl;
    }else{
        cout<<"their is no saddle point "<<endl;
    }
    
}
int main(){
    myclass ob;
    int ch;
    while (1)
    {
        cout<<"1 accept "<<endl;
        cout<<"2 display "<<endl;
        cout<<"3 saddle "<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch (ch)
        {
        case 1:
            ob.accept();
            break;
        case 2:
            ob.show();
            break;
        case 3:
            ob.saddle();
            break;
        }
    }
    
    return 0;
}