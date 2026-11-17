#include <iostream>
using namespace std;

int main(){
	float firstnum;
	float secondnum;
	float sum;
	float diff;
	float prod;
	float quot;
	
	cout<<"Enter first number: ";
	cin>>firstnum;
	cout<<"Enter second number: ";
	cin>>secondnum;
	
	char operate;
	cout<<"Choose an operator (+, -, *, /): ";
	cin>>operate;
	
	switch(operate){
		case '+':
			sum = firstnum + secondnum;
			cout<<"The sum is "<<sum;
			break;
			
		case '-':
			diff = firstnum - secondnum;
			cout<<"The difference is "<<diff;
			break;
			
		case '*':	
			prod = firstnum * secondnum;
			cout<<"The product is "<<prod;
			break;
			
		case '/':	
			quot = firstnum / secondnum;
			cout<<"The quotient is "<<quot;
			break;
		
		default:
			cout<<"INVALID OPERATOR";
			break;
	}
		
		
	
}
