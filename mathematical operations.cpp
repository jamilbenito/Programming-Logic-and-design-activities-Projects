#include<iostream>
using namespace std;

int main(void){
	/*int x = 1000;
	int y = 200;
	int sum = x + y;
	int sub = x - y;
	int product = x * y;
	float div = x / y;
	
	cout<<"The sum of x and y is " << sum <<endl;
	cout<<"The difference of x and y is " << sub <<endl;
	cout<<"The product of x and y is " << product <<endl;
	cout<<"The quotient of x and y is "<< div <<endl;*/
	
	float x = 0;
	float y = 0;
	
	cout << "enter first number: ";
	cin>> x;
	cout << "enter second number: ";
	cin>> y;
	
	float sum = x + y;
	float diff = x - y;
	int product = x * y;
	float quotient = x / y;
	
	cout<<"The sum of x and y is " << sum <<endl;
	cout<<"The difference of x and y is " << diff <<endl;
	cout<<"The product of x and y is " << product <<endl;
	cout<<"The quotient of x and y is "<< quotient <<endl;
}
