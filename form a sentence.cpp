#include <iostream>
using namespace std;

int main() {
	string first_name = "";
	string last_name = " ";
	string program = "";
	string section = "";
	string address = "";
	int age = 0;
	string gender = "";
	
	cout<<"Enter your first name: ";
	getline(cin, first_name);
	cout<<"Enter your last name: ";
	getline(cin, last_name);
	cout<<"Enter your program: ";
	getline(cin, program);
	cout<<"Enter your section: ";
	getline(cin, section);
	cout<<"Enter your adress: ";
	getline(cin, address);
	cout<<"Enter your gender: ";
	getline(cin, gender);
	cout<<"Enter your age: ";
	cin>> age;
	
	
	cout <<"Hi my Name is " 
	<< first_name 
	<< " " 
	<< last_name 
	<< " iam " 
	<< age 
	<< " years old "
	<< "i live in " 
	<< address 
	<< " my program is " 
	<< program 
	<< " Section " 
	<< section 
	<< " my gender is " 
	<< gender 
	<< "." 
	<<endl;
}

