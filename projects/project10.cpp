#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctime>
#include <string>
//#include <cmath>

using namespace std;
int main ()
{
//q1//
	//creates five places to store using array
	cout << "Enter 5 numbers: ";
	int a[5];
	double total = 0;
	for (int i=0; i < 5; i++)
	{
	//user inputs five numbers into array
	
		cin >> a[i];
	//calculates total
		total += a[i];
	}

	// declare max and min
	int min = a[0], max = a[0];
	for (int i = 1; i < 5; i++)
	{
		// finds max and min
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	//displays max and min
	cout << "The total is " << total << endl;
	cout << "Max and min are " << max << " "<< min << endl;
	
	cout << "This is the bar graph of array a :" << endl;

	for (int i = 0; i < 5; i++)
	{
	//displays what length it is going to be
	cout << a[i] << " :";
	// this is the bar graph length based on user input
	for (int j =0 ; j < a[i]; j++) cout << "*";
	cout << endl;
	

	}
	cout << endl << endl;

	
//q2//
	// generate 10 random numbers from 1 -100// 
	int aa[10];
	srand(time(0));
	for (int i = 0; i < 10; i++) aa[i] = rand() % 100 + 1;
	for (int i = 0; i < 10; i++) cout << aa[i] << " ";
	//test for max and min// 
 	max = aa[0];
	min = aa[0];
    	for (int i = 1; i < 10; i++) if (aa[i] > max) max = aa[i];
	for (int i = 1; i < 10; i++) if (aa[i] < min) min = aa[i];
	//display max and min//
    	cout << endl << "Max is " << max << " and Min is " << min << endl;
	//calculate and displaying average// 
	float average;
	total = 0; 
	for (int i = 1; i < 10; i++) total += aa[i];
	average = total/10.0;
	cout << "The total is " << total << " and our average is " << average << endl;
	//display numbers in array a whose value is above average//
	cout << "Values over average: "; 
	for (int i = 1; i < 10; i++) if (aa[i] > average) cout << aa[i] << " ";

	cout << endl << endl;

	//q3//
	// gives options of what to do//	
	while (true){
	string Future[5] = {"study more", "go to the movies", "stay home", "call a friend",
	       	"go to Las Vegas" };
   	 srand(time(0));
   	 int num = rand() % 5;
	 //display option//
   	 cout << "You should " << Future[num] << endl;
	 //if they want to continue//
	 char choice;
	 cout << "Continue(y/n)? ";
	 cin  >> choice;
	 //if choice is no then we stop//
	 if (choice == 'n'){
		 break;
		}
	}


	









	return 0;
}
