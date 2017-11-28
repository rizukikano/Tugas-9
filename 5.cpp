#include <iostream>
using namespace std;

int Multiple(int c){
	return 2*c;
}
int main(){
	for(int i = 1; i <= 15; i++){
		cout << Multiple(i) << " ";
	}
}
