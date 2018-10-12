#include<iostream>
using namespace std;

int rev(int n){
	
	if(n>0){
		return rev(n/10)+(n%10);
		
		}
	
}

int main()
{
	int n; ;
	cout<<"enter the number to be reversed : ";
	cin>>n;
	cout<<"\nreverse : ";
	cout<<rev(n);
	cout<<endl;
	
	return 0;
}