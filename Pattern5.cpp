#include<iostream>
using namespace std;

class pyraymid{

	public:
		void print(int);

};

void pyraymid :: print(int number)
{
	int num=1;
	
	for(int i=0;i<number;i++)
	{
	    if(i<number)
	    {
	        for(int k=0;k<=number-i;k++)
	           {
	               cout<<"  ";
	           }
	    }
		char c=65;
		for(int j=0;j<num;j++)
		{
			cout<<c<<" ";
			c++;
		}
		num=num+2;
		cout<<endl;
	}

}

int main()
{
	int number;

	cout<<"Enter the number "<<endl;
	cin>>number;

	pyraymid p;
	p.print(number);

	return 0;

}