#include "iostream"

using namespace std;

// head recursion
//
int fact(int i)
{
	cout<<i<<endl;
	
	if(i == 1 or i == 0)
	{
		return 1;		
	}


	else if (i< 0)
	{
		return -1;
	}
	return i * fact(i-1);



}

int main()
{
	unsigned int x;
	cout<<"enter value : ";
	cin>>x;
	cout<<fact(x)<<endl;
}
