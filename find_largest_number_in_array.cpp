#include <iostream>
using namespace std;

int main(){
	int num_elements;
	cout<<"How many numbers would you like to enter?: ";
	cin>>num_elements;
	int num_array[num_elements];
	
	int counter = 1;
	int largest_number = 0;
	while(counter <= num_elements){
		cout<<"Input "<<counter<<":";
		cin>>num_array[counter];
		if(num_array[counter] >= largest_number){
			largest_number = num_array[counter];
		} 
		else if(num_array[counter] <= largest_number)
		{
			largest_number = largest_number;
		}
		counter++;
	}
	cout<<"The largest input number is "<<largest_number;
}
