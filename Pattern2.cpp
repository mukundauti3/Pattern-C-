#include<iostream>
using namespace std;

class pyramid{

	public:
		void print(int);

};

void pyramid :: print(int number)
{
	int number2=number+4;
	for(int i=0;i<number;i++)
	{
		if(i>=1)
		{
			for(int k=1;k<=i;k++)
			{
				cout<<"  ";
			}
		}
			for(int j=number2;j>0;j--)
			{
				cout<<"* ";
			}
			
			cout<<endl;
			number2=number2 - 2;
			
	}
}

int main()
{

	int number;

	cout<<"Enter the number "<<endl;
	cin>>number;

	pyramid p;
	p.print(number);

	return 0;
}