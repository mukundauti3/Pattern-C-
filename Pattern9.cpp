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
        char ch='Z';
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch--;
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