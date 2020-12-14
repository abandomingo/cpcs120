#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//q1//

	cout << "    /\\"  << endl;
	cout << "  a/  \\ b" << endl;
	cout << "  /    \\" << endl;
	cout << " /      \\" << endl;
	cout << "----------" << endl;
	cout << "     c     " << endl;

	double sidea, sideb, sidec, area, p, pbase;
	cout << "Enter the value of sides a,b,c:" << endl;
	cin >> sidea >> sideb >> sidec;
	p = (sidea+sideb+sidec)/2;
	pbase = (p*(p-sidea)*(p-sideb)*(p-sidec));
	area = sqrt(pbase);
	cout << "The area of this triangle is " << area << endl;

	cout << endl << endl;

//q2//
	double gravity = 9.81, time, height,timeExpo ;
	cout << "Let's find the height of a bridge.\n";
	cout << "Drop a coin and tell me how long it takes to hit the water: " << endl;
	cin >> time;
	timeExpo = pow(time,2);
	height = (gravity*timeExpo)/2;
	cout << "Ok, the height of the bridge is "<< height << " meters." << endl;

	cout << endl << endl;

//q3//
	double grade;
	cout << "Enter your score: " << endl; cin >> grade;
	if (grade >= 90){
	cout << "Grade = A "; 
	} else {
	if (grade >= 80) {
	cout << "Your grade is B";
	} else { 
	if (grade >= 70) {
	cout << "Your grade is C";
	} else {
	if (grade >= 60) {
	cout << "Your grade is D";
	} else { 
	cout << "Your grade is F";
		}
	}	
	}
	}



	return 0;
}
