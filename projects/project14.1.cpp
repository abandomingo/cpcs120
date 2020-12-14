#include <iostream>
using namespace std;

int multi(int x, int y){
	if (x==0 || y==0) return 0; 

	if (y>0) {
	return x + multi(x,--y);
	}
	else {
		return -multi(x,--y);
	}
}

int main (){
	int numX, numY;

	cout << "Enter two numbers for X and Y to multiply: " << endl;
	cin >> numX >> numY;

	cout << numX << " x " << numY << " = " << multi(numX,numY) << endl;

	return 0;	
}
