#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
//q1//
	char choice;
	double width,height, length, area, pvalue;
	cout << setw(15) << setfill('-') << "" << "Menu" << setw(15) << setfill('-') << "" << endl;
	cout << "a.Compute area of a rectangle\n" << "b.Compute area of a triangle (base and height are given)\n" << "c.Compute area of a triangle (three sides are given)\n" << "d.Compute area of a trapezoid\n";
	cout << "Which area would you like to compute?"; cin >> choice;
	
	switch (choice) {
		case 'a': 
			cout << "-----------------------------\n" <<
				"|                           |\n" << 
				"|                           | w\n" << 
				"|                           |\n" <<
			        "-----------------------------\n" <<
				"           length         \n";	


			cout << "Enter the width and length: "; cin >> width >> length;
			area = width*length;
			cout << "The area of the rectangle is " << area;
			break;
		case 'b': 
			cout << "     /|\\   \n" <<
				"    / | \\\n" << 
				"   /  |  \\\n" << 
				"  /   |h  \\\n" <<
			        " /    |    \\\n" <<
				" -----------	\n"<<
				"      c       \n";	


			cout << "Enter value c and h: "; cin >> width >> length;
			area = (width*length)/2;
			cout << "The area of the triangle is " << area;
			break;
		case 'c': 
			cout << "     /\\   \n" <<
				"    /  \\ \n" << 
				"  a/    \\b\n" << 
				"  /      \\\n" <<
			        " /        \\\n" <<
				" -----------	\n"<<
				"      c       \n";	
			cout << "Enter value a, b, and c: "; cin >> width >> length >> height;
			pvalue = (width+length+height)/2;
			area = sqrt(pvalue*(pvalue-width)*(pvalue-length)*(pvalue-height));
			cout << "The area of the triangle is " << area;
			break;
		case 'd': 
			cout << "     a   \n" <<
				"    ____ \n" << 
				"   /|    \\\n" << 
				"  / |h    \\\n" <<
			        " /  |      \\\n" <<
				" ------------	\n"<<
				"      b      \n";	
			cout << "Enter value a, b, and h: "; cin >> width >> length >> height;
			area = height*(width+length)/2;	
			cout << "The area of the trapezoid is " << area;
			break;

		default :
			cout << "Invalid choice" << endl;
	}

	cout << endl << endl;
//q2//
	char gender;
	double Amale = 200.20, Afemale = 250.50, Tmale = 210.20, Tfemale = 150.50, child1 = 100.25, age, total;
	cout << setw(15) << setfill('-') << "" << "ACE CLUB FEES" << setw(15) << setfill('-') << "" << endl;
	cout << "Adults\n";
	cout << setw(5) << setfill(' ')<< "" << setw(20) << setfill('.')<< left << "Male" << "" << Amale << endl;
	cout << setw(5) << setfill(' ')<< "" << setw(20) << setfill('.')<< left << "Female" << "" << Afemale << endl;
	cout << "Teenagers\n";
	cout << setw(5) << setfill(' ')<< "" << setw(20) << setfill('.')<< left << "Male" << "" << Tmale << endl;
	cout << setw(5) << setfill(' ')<< "" << setw(20) << setfill('.')<< left << "Female" << "" << Tfemale << endl;
	cout << "Children\n";
	cout << setw(5) << setfill(' ')<< "" << setw(20) << setfill('.')<< left << "All" << "" << child1 << endl;
	
	cout << "Enter your age: "; cin >> age;
	cout << " Enter your gender(m/f)"; cin >> gender;

	switch(gender) {
		case 'f' : 
		 if (age >= 18) {
			 total = Afemale;
			 cout <<"Your total is "<< total;
		 }else if(age >= 13 && age < 18){
			 total = Tfemale;
			 cout << "Your total is "<< total;
		 }else {
			 total = child1;
			 cout << "Your total is " << child1;}
		 break;

		case 'm' :
		  if (age >= 18) { 
			 total = Amale;
			 cout <<"Your total is "<< total;
		 }else if(13 >= age <18){
			 total = Tmale;
			 cout << "Your total is "<< total;
		 }else {
			 total = child1;
			 cout << "Your total is " << child1;
		 }break;
		 default:
		  cout << "Invalid input" << endl;
	}
	cout << endl << endl;

//q3//	

	string end, monthWord; 
	int month, day, year;
	cout << "Enter today's date (mm then dd then yyyy): "; cin >> month >> day >> year;
	
	switch(month){
		case 1:
		monthWord = "Jan.";
		break;	
		case 2: 
		monthWord = "Feb.";
		break;
		case 3: 
		monthWord = "Mar.";
		break;
		case 4: 
		monthWord = "Apr.";
		break;
		case 5: 
		monthWord = "May.";
		break;
		case 6: 
		monthWord = "Jun.";
		break;
		case 7: 
		monthWord = "Jul.";
		break;
		case 8: 
		monthWord = "Aug.";
		break;
		case 9: 
		monthWord = "Sep.";
		break;
		case 10: 
		monthWord = "Oct.";
		break;
		case 11: 
		monthWord = "Nov.";
		break;
		case 12: 
		monthWord = "Dec.";
		break;

	}

	switch(day){
			case 1:
			end = "st";
			break;
			case 2: 
			end = "nd";
			break;
			case 3: 
			end = "rd";
			break;
			default: 
			end = "th";
				}

	cout << "Today is " << monthWord << " " << day << end << ", " << year; 	

	cout << endl << endl;
 //q4//
 	//a. 
	for (int i = 5; i <= 50; i = i + 5){
		cout << i << " ";
	}	cout << endl;


	//b.
	for (int i = 10; i <=100; i = i + 10){
		cout << i << " ";
		}	cout << endl;

	//c.
	for (int i = 20; i >= 2; i = i-2){
		cout << i << " ";
		
	}	cout << endl;

	//d.
	for (char i = 65; i <= 81; i = i+2 ){	
		cout << i << " ";
	       		
		}	cout << endl;

	//e.
	for (char i= 82; i >= 77 ; i--){
		cout << i << " ";
	
	}	cout << endl;



	return 0;
}
