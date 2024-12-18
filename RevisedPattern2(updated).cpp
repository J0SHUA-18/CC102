#include <iostream>

using namespace std;

int main(){
	
	for (int i=0; i<7; i++){
		for(int j=0; j<i; j++){
			cout << "  ";
		}
		for(int j=i; j<7; j++){
		    if (j==8 && i == 1 || j == 4 && i == 1 || j == 5 && i == 2 || j == 3 && i == 4){
		        cout <<"  ";
		    }    
		    else if (j==8 && i == 1 || j == 4 && i == 3 || j == 3 && i == 2 || j == 1 && i == 3){
		        cout <<"  ";
			}    
		    else if (j==8 && i == 1 || j == 4 && i == 3 || j == 3 && i == 4 || j == 1 && i == 3){
		        cout <<"  ";
				
	         } 
			else if((i % 2 == 0 && j % 2 == 1 || i % 2 == 1 && j % 2 == 1 )){
				cout << "# ";
			}
			else if ((i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1 )){
				cout << "@ ";
		
			}
			else{
				cout << "$ ";
		
			}
		}
		cout << endl;
	}
	return 0;
	
}
