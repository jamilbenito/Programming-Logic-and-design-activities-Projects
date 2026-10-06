#include <iostream>
using namespace std;

int main(void){
	string user_name = "Jamil", usid;
	int password = 12345, pass;
	
	
	for(int i=3; i>0;){
		cout<<"Enter user_name: ";
		cin>>usid;
		cout<<"Enter password: ";
		cin>>pass;
		if(usid == user_name && pass == password){
			cout<<"login success!"<<endl;
			break;

		}
		else if(usid == user_name && pass != password){
			cout<<"wrong password!"<<endl;
			i--;
			if (i == 0) {
				cout<<"Your account is locked!";
				break;
			}
			cout<<i <<" attempts left!"<<endl;
			
		}
		else{
			cout<<"wrong username and password!"<<endl;
		}
	}
	
}
