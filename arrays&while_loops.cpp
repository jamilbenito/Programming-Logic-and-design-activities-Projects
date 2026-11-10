#include <iostream>
using namespace std;

int main(){
	string names[5];
	string value;	
	
	int counter = 0;
	while (counter <= 4){
		cout<<"Enter name: ";
		cin>>value;
		names[counter] = value;
		counter++;
	}
	cout<<endl;
	int counter_2 = 0;
	while(counter_2 <= 4){
		cout<<names[counter_2]<<endl;
		counter_2++;
	}
}
