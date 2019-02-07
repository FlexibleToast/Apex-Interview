
#include <iostream>
#include <iomanip>
#include <string>
#include <ios>

using namespace std;

void printStairs(int size);

int main() {
	printStairs(6);
	return 0;
}

void printStairs(int size){
	string stair;
	for(int i = 0; i < size; i++){
		stair.append("#");
		cout << setw(size) << right << stair << endl;
	}
}
