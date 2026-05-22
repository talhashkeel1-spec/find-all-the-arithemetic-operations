#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter First Value: ";
	cin>>a;
	cout<<"Enter Second Value: ";
	cin>>b;
	
	int Addition, Subtraction, Multiplication, Division, Modulus;
	Addition = a+b;
	Subtraction = a-b;
	Multiplication = a*b;
	Division = a/b;
	Modulus = a%b ;
	
	cout<<"Addition: "<<Addition<<endl;
	cout<<"Subtraction: "<<Subtraction<<endl;
	cout<<"Multiplication: "<<Multiplication<<endl;
	cout<<"Division: "<<Division<<endl;
	cout<<"Modulus: "<<Modulus<<endl;
	
	return 0;
}
