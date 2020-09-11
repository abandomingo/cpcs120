#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int score1, score2, score3;
	double avg;
	cout << "Enter your scores in three exams: ";
	cin >> score1 >> score2 >> score3 ;
	avg = (score1 + score2 +score3) / 3.0;
	cout << "Your average is " << avg << endl;

	cout << endl << endl;
// q2

	double shirt = 33.15, pants = 75.99, socks = 5.15, shirtAmt, pantsAmt, socksAmt, totalPrice;
	
	cout << setw(15) << setfill('-') << "" << "Target Store" << setw(15) << setfill('-') << "" << endl;
	cout << setfill(' ') << setw(5) << "" << "Shirts" << setfill('.') << setw(24) << shirt << endl;
	cout << setfill(' ') << setw(5) << "" << "Pants" << setfill('.') << setw(24) << pants << endl;
	cout << setfill(' ') << setw(5) << "" << "Socks" << setfill('.') << setw(24) << socks << endl;
	cout << setfill(' ') << setw(10) << "" << "Enter the number of shirts: " ; cin >> shirtAmt ;
	cout << setfill(' ') << setw(10) << "" << "Enter the number of pants: " ; cin >> pantsAmt ;
	cout << setfill(' ') << setw(10) << "" << "Enter the number of socks: " ; cin >> socksAmt ;
	totalPrice = (shirtAmt*shirt)+(pantsAmt*pants)+(socksAmt*socks);
	cout << setfill(' ') << setw(15) << "" << "Your total bill: $ " << totalPrice << endl;

	cout << endl << endl;

//q3
	
	double penny = 0.01, nickel = 0.05, dime = 0.1, quarter = 0.25, pnyAmt, ncklAmt, dimeAmt, qrtAmt, total;
	cout << "Check your pockets and tell me: " << endl;
	cout << setfill(' ') << setw(10) << "" << "How many pennies you have? " ; cin >> pnyAmt ;
	cout << setfill(' ') << setw(10) << "" << "How many nickels you have? " ; cin >> ncklAmt ;
	cout << setfill(' ') << setw(10) << "" << "How many dimes you have? " ; cin >> dimeAmt ;
	cout << setfill(' ') << setw(10) << "" << "How many quarters you have? " ; cin >> qrtAmt ;
	total = (penny*pnyAmt)+(ncklAmt*nickel)+(dimeAmt*dime)+(qrtAmt*quarter);
	cout << setfill(' ') << setw(10) << "" << "You have a total of $ " << total;
	cout << endl << endl;

//q4

	string name, lname, age;
	cout << "What is your first name? " ; cin >> name;
	cout << "What is your last name? " ; cin >> lname;
	cout << "How old are you? " ; cin >> age;
	cout << setfill(' ') << setw(8) << "" << "Hello "<< name << " " << lname << endl;
	cout << setfill(' ') << setw(8) << "" << "At age " << age << "you are the govenor of California." << endl;
	cout << setfill(' ') << setw(8) << "" << "Good luck!\n" << "\tStudents in CS-120 class" << endl;

	cout << endl << endl;
//q5
	string fname, grade1, grade2, grade3;
	cout << "Enter your name: " ; cin >> fname;
	cout << "Enter your grade in Math course: " ; cin >> grade1;
	cout << "Enter your grade in Computer course: " ; cin >> grade2;
	cout << "Enter your grade in Biology course: " ; cin >> grade3;
	cout << setfill(' ') << setw(5) << "" << fname << ", this is your grade report: " << endl;
	cout << setfill(' ') << setw(5) << setfill(' ') << setw(5)<< "" << "COURSE                    GRADE" << endl;
	cout << setfill(' ') << setw(5) << "" << setw(15) << setfill('-') << "" << setw(16) << setfill('-') << "" << endl;
	cout << setfill(' ') << setw(5) << "" << "Mathematics" << setfill('.') << setw(21) << grade1 << endl;
	cout << setfill(' ') << setw(5) << "" << "Computer" << setfill('.') << setw(24) << grade2 << endl;
	cout << setfill(' ') << setw(5) << "" << "Biology" << setfill('.') << setw(25) << grade3 << endl;



return 0;
}
