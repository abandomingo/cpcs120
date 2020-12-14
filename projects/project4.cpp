#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//q1//
	double width, length, area, perimeter;
	cout << " ____________________________\n";
	cout << " |                           | \n";
	cout << " |                           |  width\n";
	cout << " |                           |\n";
	cout << " |                           |\n";
	cout << " ____________________________\n";
	cout << "             length           \n";

	cout << "Enter the measure of width:" ; cin >> width ;
	cout << "Enter the measure of length:" ; cin >> length;
	area = length*width;
	perimeter = (2*length)+(2*width);
	
	cout << "Area = " << area << endl;
	cout << "Perimeter = " << perimeter << endl;
	cout << endl << endl;

//q2//

	double intnum1, intnum2, total, avg;
	cout << "Enter two integer numbers: " ; cin >> intnum1; cin >> intnum2;
	total = intnum1 + intnum2;
	avg = total/2;
	cout << intnum1 << " + " << intnum2 << " = " << total << endl;
	cout << "the total of " << intnum1 << " and " << intnum2 << " is " << total << endl;
       	cout << "and their average is " << avg << endl;	
	cout << endl << endl;

//q3//
	double score1, score2, score3, midscore;
	cout << "I can compute your midterm's average, try me\n";
	cout << "\t Enter your scores in 3 exams: "; cin >> score1; cin >> score2; cin >> score3;
	midscore = (score1+score2+score3)/3;
	cout << " Your average is : " << midscore << endl;

//q4//

	string fname, mintial, lname;
	cout << "Give me your name, I will send you a birthday card\n";
	cout << "\t What is your first name: "; cin >> fname ;
	cout << "\t What is your middle initial: "; cin >> mintial;
	cout << "\t What is your last name: "; cin >> lname;
	cout << setw(15) << setfill('<') << "" << "Happy Birthday " << fname << mintial << ". " << lname << setw(15) << setfill('>') << "" << endl;
	cout << endl << endl;

//q5//

	double drinks = 1.25, chips = 1.09, nuts = 1.18, drinkAmt, chipAmt, nutAmt, totalPrice;
	
	cout << setw(15) << setfill('-') << "" << "MENU" << setw(15) << setfill('-') << "" << endl;
	cout << setfill(' ') << setw(5) << "" << "Drinks" << setfill('.') << setw(24) << drinks << endl;
	cout << setfill(' ') << setw(5) << "" << "Chips" << setfill('.') << setw(24) << chips << endl;
	cout << setfill(' ') << setw(5) << "" << "Nuts" << setfill('.') << setw(24) << nuts << endl;
	cout << setfill(' ') << setw(10) << "" << "How many drinks? " ; cin >> drinkAmt ;
	cout << setfill(' ') << setw(10) << "" << "How many chips? " ; cin >> chipAmt ;
	cout << setfill(' ') << setw(10) << "" << "How many nuts? " ; cin >>nutAmt ;
	totalPrice = (drinkAmt*drinks)+(chipAmt*chips)+(nutAmt*nuts);
	cout << setfill(' ') << setw(15) << "" << "Total bill =  " << totalPrice << endl;

	cout << endl << endl;

//q6//

	double fdegree, cdegree;
	cout << "I can convert temperature from degrees to Fahrenheit to degrees Celsius. Try me\n";
	cout << "Enter a temperature in Fahrenheit: "; cin >> fdegree;
	cdegree = (5*fdegree-5*32)/9;
	cout << fdegree << " Fahrenheit is " << cdegree << " Celsius\n";

	return 0;
}
