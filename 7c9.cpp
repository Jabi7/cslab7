#include<iostream>
using namespace std;

int fact(int n){
	
	if(n>0)
		return n*fact(n-1);
	else return 1;
		
		
	
}

int main()
{
	int n; ;
	cout<<"enter the number : ";
	cin>>n;
	cout<<"\nfactorial is : ";
	cout<<fact(n);
	cout<<endl;
	
	return 0;
}