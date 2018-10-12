#include<iostream>
using namespace std;

int printsumEven(int n){

	int k;
	if(n>0){

		if(n%2==0){
		return n + printsumEven(n-2);
		}else{
		k=n-1;
		return k + printsumEven(k-2);
		}

	}
	
}

int printsumodd(int n){

	int k;
	if(n>0){

		if(n%2!=0){
		return n + printsumodd(n-2);
		}else{
		k=n-1;
		return k + printsumodd(k-2);
		}
			
	}
	
}

int main()
{
	int n; ;
	cout<<"enter the number to be summed from 1 : ";
	cin>>n;
	cout<<"\nsum of even is: ";
	cout<<printsumEven(n);
	cout<<"\nsum of odd is: ";
	cout<<printsumodd(n);
	cout<<endl;
	
	return 0;
}