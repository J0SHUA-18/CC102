#include <iostream> 

using namespace std;

int main(){
	int age;
	
	cout << "What is your age?: ";
	cin >> age;
	
	if(age < 16){
	 cout << "Your to young to drive!";
	} else if (age == 16 ){
	cout << "Better Clear the Road!";
	} else {
	cout << "Your Getting Pretty Old!";
	}

	return 0;
}