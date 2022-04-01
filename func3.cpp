#include "iostream"

using namespace std;


void lwswap( int p, int q)
{

	cout<<p<<" "<<q<<endl;
	int temp;
	temp =  p;
	p = q;
	q = temp;
	cout<<p<<" "<<q<<endl;



//	cout<<z<<endl;
}
int main()
{

	int i,j;
	i = 5;
	j = 10;
	cout<<"i and j : "<<i<<" "<<j<<endl;
	lwswap(i, j);
	cout<<"i and j : "<<i<<" "<<j<<endl;



}
