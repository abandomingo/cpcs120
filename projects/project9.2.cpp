#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctime>
#include <cmath>

using namespace std;
void DisplayMenu()
{
	cout << setw(10) << setfill('-') << "" << "Practice Arithmetic" << setw(10) << setfill('-') << "" << endl;
	cout << "\t 1. Addition" << endl;
	cout << "\t 2. Subtraction" << endl;
	
}
void Select(int &choice)
{
	cout << "Enter your choice (1/2): " << endl;
	cin >> choice;
}
void PracticeAdd()
{
	int right = 0, wrong = 0, correct = 0;
	char nextProb;
	while (true){
		int num1 = 0, num2= 0, answer;
       	 	num1 = rand() % 100 ;
		num2 = rand() % 100 ;
		correct = num1 + num2;
		cout << num1 << " + " << num2 << " =?";
		cin >> answer;
		if( answer == correct){
			cout << "CORRECT" << endl;
			right++;
		} else {
			cout << "WRONG" << endl;
			wrong++;
		}
		cout << "Continue(y/n)?";
		cin >> nextProb;
		if (nextProb == 'n'){
			break;
		}	
	}

	cout << "No. of CORRECT answers = " << right << endl;
	cout << "No. of WRONG answers = " << wrong << endl;
}
 
void PracticeSub()
{
	int right = 0, wrong = 0, correct = 0;
	char nextProb;
	while (true){
		int num1 = 0, num2= 0, answer;
       	 	num1 = rand() % 100 ;
		num2 = rand() % 100 ;
		correct = num1 - num2;
		cout << num1 << " - " << num2 << " =?";
		cin >> answer;
		if( answer == correct){
			cout << "CORRECT" << endl;
			right++;
		} else {
			cout << "WRONG" << endl;
			wrong++;
		}
		cout << "Continue(y/n)?";
		cin >> nextProb;
		if (nextProb == 'n'){
			break;
		}	
		else {
			cout << nextProb;
		}
	}

	cout << "No. of CORRECT answers = " << right << endl;
	cout << "No. of WRONG answers = " << wrong << endl;
}
 
int main()
{
		// display menu
		DisplayMenu();
	 	//select your choice
		int choice = 0;
		Select(choice);
		// test your choice
		switch(choice)
		{   case 1: 
			PracticeAdd();
			break;
		    case 2: 
			PracticeSub();
			break;
		}		
		//terminate program   	
		return 0; 
	}

