#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	//q1//
	int choice, score1, score2, score3, score4;
	double formula;		
	cout << setw(15) << setfill('-') << "" << "Student's Evaluation Center" << setw(15) << setfill('-') << "" << endl;
	cout << "1.Compute  2 Math exams average\n2.Compute 3 Computer Sc. exams average \n3.Compute 4 Physics exams average\n";
	cout << "Please enter your choice: "; cin >> choice;
		if (choice == 1) {
			cout << "\tEnter your 2 Math exam scores "; 
			cin >> score1 >> score2; 
			formula = (score1 + score2)/2.0; 
			cout << "Your average is " << formula;
                        }else if (choice == 2) {	
			cout << "\tEnter your 3 Computer Science exam scores "; 
			cin >> score1; cin >> score2 >> score3;
			formula = (score1 + score2 + score3)/3.0;
			cout << "Your average is " << formula;}
			else if (choice == 3) {
			cout << "\tEnter your 4 Physics exam scores "; 
			cin >> score1 >> score2 >> score3 >> score4; 
			formula = (score1 + score2 + score3 +score4)/4.0; 
			cout << "Your average is " << formula; } 
//q2//
	char club, gender;
	int age;
		cout << setw(15) << setfill('-') << "" << "Clubs Requirements" << setw(15) << setfill('-') << "" << endl;
		cout << "a.Sigma Club(you must be male and over 21)\nb.Omega Club(you must be female and teenagers)\n c.Kapa Club(you must be male or female and over 30)\n";
		cout << "Which club do you want to be a member of(a/b/c)? ";
		cin >> club; 
		if (club == 'a' ){
		cout << "What is your gender? ";
		cin >> gender;
		cout << "What is your age? ";
		cin >> age;
			if ((gender == 'M' || gender == 'm') && age > 21)
			cout << "You are qualified to be a member of Sigma Club! " << endl;
			else cout << "Sorry you are not qualified to be a member of Sigma Club. " << endl;}
		if (club == 'b' ){
		cout << "What is your gender? ";
		cin >> gender;
		cout << "What is your age? ";
		cin >> age;
			if ((gender == 'F' || gender == 'f') && age >= 13)	
			cout << "You are qualified to be a member of Omega Club! " << endl;
			else cout << "Sorry you are not qualified to be a member of Omega Club." << endl;}
		if (club == 'c' ){
		cout << "What is your gender? ";
		cin >> gender;
		cout << "What is your age? ";
		cin >> age;
			if ((gender == 'F' || gender == 'f' || gender == 'M' || gender == 'm') && age > 30)
			cout << "You are qualified to be a member of Kapa Club! " << endl;
			else cout << "Sorry you are not qualified to be a member of Kapa Club. " << endl;}

//Q3//
	char drinkType;
	double soda = 1.35, water = 1.10, sand10 = 3.45, sand12 = 3.85, drinkAmt, sandType, sandAmt, total;
	cout << setw(15) << setfill('-') << "" << "7-11 Convenient Store" << setw(15) << setfill('-') << "" << endl;
	cout << "Drinks" << endl;
	cout << setfill(' ') << setw(5) << "" << "Soda(S)" << setfill('.') << setw(24) << soda << endl;
	cout << setfill(' ') << setw(5) << "" << "Water(W)" << setfill('.') << setw(24) << water << endl;
	cout << "Sandwhiches" << endl;
	cout << setfill(' ') << setw(5) << "" << "10 inches" << setfill('.') << setw(24) << sand10 << endl;
	cout << setfill(' ') << setw(5) << "" << "12 inches" << setfill('.') << setw(24) << sand12 << endl;

	cout << "How many drinks?"; cin >> drinkAmt;
	cout << "What kind of drink (S=Soda, W=Water)?"; cin >> drinkType;
	cout << "How many Sandwhiches?"; cin >> sandAmt;
	cout << "What size of sandwhiches (10/12inches)"; cin >> sandType;

	if ((drinkType == 's'|| drinkType == 'S') && sandType == 10) {
		total = ((soda*drinkAmt) + (sand10*sandAmt));
		cout << "Your total bill =$ " << total << endl;}
	if ((drinkType == 'w'|| drinkType == 'w') && sandType == 10) {
		total = ((water*drinkAmt) + (sand10*sandAmt));
		cout << "Your total bill =$ " << total << endl;}
	if ((drinkType == 's'|| drinkType == 'w') && sandType == 12) {
		total = ((soda*drinkAmt) + (sand12*sandAmt));
		cout << "Your total bill =$ " << total << endl;}
	if ((drinkType == 'w'|| drinkType == 'w') && sandType == 12) {
		total = ((water*drinkAmt) + (sand12*sandAmt));
		cout << "Your total bill =$ " << total << endl;}

	cout << endl << endl;

//q4//
	char grade;
	int score;
	cout << "Enter your score: "; cin >> score;
	if (score < 60) {
	       grade = 'F';}
	if (score >= 60 && score < 70) {
	       grade = 'D';}
	if (score >= 70 && score < 80) {
	       grade = 'C';}
	if (score >= 80 && score < 90) {
	       grade = 'B';}
	if (score >= 90 && score <= 100) {
	       grade = 'C';}
	cout << "\t Your grade is a " << grade;











	
	



































		return 0;
}
