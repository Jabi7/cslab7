#include<iostream>
using namespace std;

void printEven(int n){

	int k;
	if(n>0){
		if(n%2==0){
			cout<<n<<" ";
			printEven(n-2);	
		}
		else{

			k=n-1;
			cout<<k<<" ";
		    
			printEven(k-2);	
		
		}
	}
	
}

void printOdd(int n){

	int k;
	if(n>0){
		if(n%2!=0){
			cout<<n<<" ";
			printOdd(n-2);	
		}
		else{

			k=n-1;
			cout<<k<<" ";
		    
			printOdd(k-2);	
		
		}
	}
	
}
int main()
{
	int n; 
	cout<<"enter the number to be printed till : ";
	cin>>n;
	cout<<"\n the EVEN nums are : ";
	printEven(n);
	cout<<endl;
	cout<<"\n the ODD nums are : ";
	printOdd(n);
	cout<<endl;
	return 0;
}