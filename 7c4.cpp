#include<iostream>
using namespace std;

int printsum(int n){
	
	if(n>0){
		
		return n + printsum(n-1);	
	}
	
}

int main()
{
	int n; ;
	cout<<"enter the number to be summed from 1 : ";
	cin>>n;
	cout<<"\nit is: ";
	cout<<printsum(n);
	cout<<endl;
	
	return 0;
}