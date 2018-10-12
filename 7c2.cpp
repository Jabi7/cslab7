#include<iostream>
using namespace std;

void printnum(int n){
	
	if(n>0){
		cout<<n<<" ";
		printnum(n-1);	
	}
	
}

int main()
{
	int n; ;
	cout<<"enter the number to be printed till : ";
	cin>>n;
	cout<<"\n they are : ";
	printnum(n);
	cout<<endl;
	
	return 0;
}