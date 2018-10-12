#include<iostream>
using namespace std;

void rev(int n){
	
	if(n>0){
		cout<<n%10;
		rev(n/10);	
	}
	
}

int main()
{
	int n; ;
	cout<<"enter the number to be reversed : ";
	cin>>n;
	cout<<"\nreverse : ";
	rev(n);
	cout<<endl;
	
	return 0;
}