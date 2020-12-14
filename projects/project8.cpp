#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{

	double Bpound = 0.77, CNY = 6.94, Euro = 0.87;
	int size; 
	cout << "Enter the table size: ";
	cin >> size;
	cout << "$\tBpound\tCNY\tEuro" << endl;
	for (int i=1; i <= size; i++, Bpound += 0.77, CNY += 6.94, Euro += 0.87)
	cout << i << "\t" << Bpound << "\t" << CNY << "\t" << Euro << endl;
	
//q2//

	double score,avg, sum = 0;
	int totalExams ;
	cout << "Enter the number of exams: "<< endl;
	cin >> totalExams;
	for (int i=1; i <= totalExams; i++)
	{
		cout << "Enter score for exam_" << i << ": ";
		cin >> score;
		sum += score; 
	}
	avg = sum/totalExams;
	cout << "Your average = " << setprecision(4) << avg;  \
	cout << endl << endl;

//q3//
	
	char drinkType;
	double soda = 1.10, water = 1.25, juice = 1.80, hamb = 4.10, 
	       taco = 1.10, chip8 =0.89, chip10 = 1.20, chip12 = 1.45, 
		ppl, sodaAmt, waterAmt, juiceAmt, hambAmt, tacoAmt, chipAmt, chipSize, bill, billTotal = 0;
	cout << setw(15) << setfill('-') << "" << "Menu" << setw(15) << setfill('-') << "" << endl;
	cout << "Drinks" << endl;
	cout << setfill(' ') << setw(5) << "" << "Soda" << setfill('.') << setw(24) << soda << endl;
	cout << setfill(' ') << setw(5) << "" << "Water" << setfill('.') << setw(24) << water << endl;
	cout << setfill(' ') << setw(5) << "" << "Juice" << setfill('.') << setw(24) << juice << endl;

	cout << "Sandwhiches" << endl;
	cout << setfill(' ') << setw(5) << "" << "Hamburger" << setfill('.') << setw(24) << hamb << endl;
	cout << setfill(' ') << setw(5) << "" << "Taco" << setfill('.') << setw(24) << taco << endl;

	cout << "Chips" << endl;
	cout << setfill(' ') << setw(5) << "" << "8 OZ" << setfill('.') << setw(24) << chip8 << endl;
	cout << setfill(' ') << setw(5) << "" << "10 OZ" << setfill('.') << setw(24) << chip10 << endl;
	cout << setfill(' ') << setw(5) << "" << "12 OZ" << setfill('.') << setw(24) << chip12 << endl;

	cout << "Enter the number of customers: "; cin >> ppl;
	for (int i=1; i <= ppl; i++)
	{
	cout << "How many Sodas, Water and Juice bottles?"; cin >> sodaAmt >> waterAmt >> juiceAmt;
	cout << "How mant Hamburgers or Tacos?"; cin >> hambAmt >> tacoAmt;
	cout << "How many chips?"; cin >> chipAmt;
	cout << "What size of chips(8/10/12)?"; cin >> chipSize;
       	if (chipSize == 8){
	bill = (soda*sodaAmt)+(water*waterAmt)+(juice*juiceAmt)+
		(hamb*hambAmt)+(taco*tacoAmt)+(chip8*chipAmt);
		cout << "Your bill is " << setprecision(5) << bill << endl;
		billTotal += bill;

	}
	if (chipSize == 10){
	bill = (soda*sodaAmt)+(water*waterAmt)+(juice*juiceAmt)+
		(hamb*hambAmt)+(taco*tacoAmt)+(chip10*chipAmt);
		cout << "Your bill is " << setprecision(5) <<  bill << endl;
		billTotal += bill;

	}
	if (chipSize == 12){
	bill = (soda*sodaAmt)+(water*waterAmt)+(juice*juiceAmt)+
		(hamb*hambAmt)+(taco*tacoAmt)+(chip12*chipAmt);
		cout << "Your bill is " << setprecision(5) << bill << endl;
		billTotal += bill;
	}}
	
	cout << "WOW! We have a collected a total of $" << setprecision(5) << billTotal; 
	
	

				















	return 0;
}
