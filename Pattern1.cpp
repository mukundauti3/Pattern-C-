#include<iostream>
using namespace std;

class pyramid{

	public:
		void print(int);

};
void pyramid :: print(int number)
{

	int num=1;int num2=2;
	for(int i=1;i<=number;i++)
	{

		if(i<number)
		{
			for(int k=1;k<=number - i;k++)
			{
				cout<<" ";
			}
		}
		for(int j=1;j<=i;j++)
		{	
			cout<<num;
			num++;
		}
		
		num=i+1;

		if(i>1)
		{	
			for(int l=2;l<=i;l++)
		    {	
			    cout<<num2;
			    num2--;
		    }
		    num2=i*2;
			
		}
		cout<<endl;
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