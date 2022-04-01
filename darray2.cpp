#include "iostream"

using namespace std;

int main()
{


	int how;

	cin>>how;

	// array : some size : run time : dynamic array
	//
	
	//int a[how];
	
	int *p;

	//  heap memory
	p = (int* )malloc(how * 4);
	cout<<p<<endl;

	for(int i=0; i<how ; i++)
	{

		cin>>p[i];
	}



	endl(cout);
	endl(cout);

	for(int j=0; j<how; j++)
	{

		cout<<p[j]<<endl;
	}

	endl(cout);
	endl(cout);


//	free(p);


	cout<<"enter for more : "<<endl;
	int more;
	cin>>more;
	int *q;
	q = (int*)malloc(more * 4);
	cout<<q<<endl;

	for(int k=0; k<more; k++)
	{
		cout<<q[k]<<endl;

	}



	// O(n) : tranfer data
	for(int m=0; m<how ; m++)
	{

		q[m] = p[m];

	}

	for(int k=0; k<more; k++)
	{
		cout<<q[k]<<endl;

	}



	free(p);

	p = NULL;
	cout<<p<<endl;
}
