#include <iostream>
using namespace std;

int main(void) {
	char let = 'a';
	for(int i = 1; i<= 26; i++){
		
		if(let == 'a' && let == 'e' && let == 'i' && let == 'o' && let == 'u'){
			continue;
		}
		else {
			cout<<let<<endl;
		}
		let++;
	}
}
	

