#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string name;
	double shirt = 3.15, pants = 1.99, socks = 5.15, shirtAmt, pantsAmt, socksAmt, totalPrice;
	
	cout << setw(15) << setfill('-') << "" << "Seven-11" << setw(15) << setfill('-') << "" << endl;
	cout << setfill(' ') << setw(5) << "" << "Drinks" << setfill('.') << setw(24) << shirt << endl;
	cout << setfill(' ') << setw(5) << "" << "Chips" << setfill('.') << setw(24) << pants << endl;
	cout << setfill(' ') << setw(5) << "" << "Sandwhiches" << setfill('.') << setw(24) << socks << endl;
	cout << setfill(' ') << setw(10) << "" << "Enter your name: " ; cin >> name; 
	cout << setfill(' ') << setw(10) << "" << name << ", how many drinks? " ; cin >> shirtAmt ;
	cout << setfill(' ') << setw(10) << "" << name << ", how many chips? " ; cin >> pantsAmt ;
	cout << setfill(' ') << setw(10) << "" << name << ", how many sandwhiches? " ; cin >> socksAmt ;
	totalPrice = (shirtAmt*shirt)+(pantsAmt*pants)+(socksAmt*socks);
	cout << setfill(' ') << setw(15) << "" << "Your total bill: $ " << totalPrice << endl;

	cout << endl << endl;
	return 0;
}

