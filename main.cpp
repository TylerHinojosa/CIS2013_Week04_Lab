#include <iostream>
using namespace std;

bool guess (){
	cout << "Make your guess:" << endl;
	return true;
}

int main(){
	bool failed = true;
	int number = 73;
	int count = 0;
	
	while (failed){
		count ++;
		failed = guess();
	}
	
	cout << "You guessed " << count << " times!" << endl;
}