#include<iostream>
using namespace std;

class Pyramid{
    int number,num2;
    public:
    void accept();
    void display();
};

void Pyramid :: accept()
{
    cout<<"Enter the Number"<<endl;
    cin>>number;
    num2=number+(number-1);
}

void Pyramid :: display()
{
    
    for(int i=1;i<=num2;i++)
    {
        if(i<=number)
        {
        int k=1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
        }
        else
        {
            int m=1;
       for(int l=num2;l>=i;l--)
       {
           cout<<m<<" ";
           m++;
       }
        cout<<endl;
        }
        
    }
}
int main()
{
    Pyramid p;
    p.accept();
    p.display();

    return 0;
}