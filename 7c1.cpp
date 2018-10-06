#include<iostream>
using namespace std;

double power(double x,int y){
	
	if(y>0)
		return (x*power(x,y-1));
	else if(y<0)
		return (1/x)*(power(x,y+1));
	else 
		return 1;
}

int main()
{
	double a; int n;
	cout<<"enter a number to be powered : ";
	cin>>a;
	cout<<"\npower : ";
	cin>>n;
	cout<<"\nresult : "<<power(a,n)<<endl;
	
	return 0;
}