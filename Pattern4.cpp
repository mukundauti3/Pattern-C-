#include<iostream>
using namespace std;

class pyramid
{
	public:
		void print(int);

};

	void pyramid :: print(int number)
	{
		char alphabet = 65;
		for(int i=1;i<=number;i++)
		{
			for(char j=1;j<=i;j++)
			{
				cout<<alphabet<<" ";
				
			}
			alphabet++;
			cout<<endl;
		}
	}

int main()
{
	int number;
	cout<<"Enter the number "<<endl;
	cin>>number;

	pyramid p1;
	p1.print(number);
	return 0;
}