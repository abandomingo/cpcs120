#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
//q1
	string myFullName = "Jerry Brown", myAddress = "State Capital, Suite 1173" ,
	       myPhoneNumber = "(916)558-3160)" ;

	cout << setw(30) << setfill(' ') << "My personal information: \n";
	cout << setw(22) << "My full name" << setw(16)  << setfill('.') << myFullName << endl;
	cout << setfill(' ') << setw(20) << "My address" << setw (32) << setfill('.') << myAddress << endl;
	cout << setfill(' ') << setw(25) << "My phone number" << setw (17) << setfill('.') << myPhoneNumber << endl;

cout<< endl << endl;

//q2
	string soda_price = "1.25", juice_price = "1.75", hamburger_price = "2.35", fish_price = "1.55";
	cout << setw(15) << setfill('-') << "" << "MENU" << setw(15) << setfill('-') << "" << endl;
 	cout << "Drinks\n";
	cout << setfill(' ') << setw(5) << "" << "Soda" << setfill('.') << setw(24) << soda_price << endl;
	cout << setfill(' ') << setw(5) << "" << "Juice" << setfill('.') << setw(23) << juice_price << endl;
	cout << "Sandwiches\n";
	cout << setfill(' ') << setw(5) << "" << "Hamburger" << setfill('.') << setw(19) << hamburger_price << endl;
	cout << setfill(' ') << setw(5) << "" << "Fish" << setfill('.') << setw(24) << fish_price << endl;

	cout << endl << endl;
//q3
	double score_1 = 80.0, score_2 = 92.0, score_3 = 77.0;
	double exam_Avg = (score_1 + score_2 +score_3)/3.0;
	
	cout << setfill(' ') << setw(3)<< ""<< "Hello Mr/Mrs. Bill Gate\n";
	cout << setfill(' ') << setw(3)<< ""<< "You have recieved " << score_1 << "," << score_2 << "," << score_3 << " in\n" ;
	cout << setfill(' ') << setw(3)<< ""<< "three exams. Your average is " << exam_Avg;
	
	cout << endl << endl;
//q4
	
	double rectWidth = 12.34, rectLength = 33.05;
	double Area = (rectWidth*rectLength), Perimeter =((2*rectWidth)+(2*rectLength));
	cout << setfill(' ') << setw(5) << "" << setw(15) << setfill('-') << "" << setw(15) 
		<< setfill('-') << "" << endl;
	cout << setfill(' ') << setw(5) << "" << "|" << setw(29) << setfill(' ') << "|" << endl;
	cout << setfill(' ') << setw(5) << "" << "|" << setw(29) << setfill(' ') << "|" << "width =" 
		<< rectWidth << endl;
	cout << setfill(' ') << setw(5) << "" << "|" << setw(29) << setfill(' ') << "|" << endl;
	cout << setfill(' ') << setw(5) << "" << setw(15) << setfill('-') << "" << setw(15) 
		<< setfill('-') << "" << endl;
	cout << setfill(' ') << setw(10) << "" << "length = " << rectLength << endl;
	cout << setfill(' ') << setw(15) << "" << "Area = " << Area << endl;
	cout << setfill(' ') << setw(15) << "" << "Perimeter = " << Perimeter << endl;

	return 0;

}
