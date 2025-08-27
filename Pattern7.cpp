#include<iostream>
using namespace std;
class Pyramid{
    int number;
    public:
    void accept();
    void display();
};

void Pyramid :: accept()
{
    cout<<"Enter the number "<<endl;
    cin>>number;
}

void Pyramid :: display()
{
    for(int i=1;i<=number;i++)
    {
        for(int j=number;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    Pyramid p;
    p.accept();
    p.display();
    return 0;
}