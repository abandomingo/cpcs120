#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctime>
//#include <cmath>

using namespace std;
void ReadData(int &a, int  &b, int &c)
{
	cout << "Enter x, y and z:";
	cin >> a >> b >> c;
}
void FindSumAve(int x, int y, int z, int &sum, float &average)
{
	sum = x + y + z;
	average = (x + y + z)/3.0;
}

void ShowSumAve(int sum, float average) 
{
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl;
	
}
void FindMaxMin( int &max, int &min, int x, int y, int z)
{
	if (x >= y && y >= z) max = x;
	else if (y>= x && y >=z) max = y;
	else max = z;
	if (x <= y && x <= z) min = x;
	else if (y <= x && y <= z) min =y;
	else min = z;

}

void ShowMaxMin( int max, int min)
{
	cout << "Max is " << max << endl;
	cout << "Min is " << min << endl;
}



int main()
{
	//declare identifiers
	int x=1, y=1, z=1, max, min;
	//read three integer numbers into x,y,z
	ReadData(x,y,z);
	//find and display the sum and average of x,y,z
	int Sum; float Average;
	FindSumAve(x, y, z, Sum, Average);
	ShowSumAve(Sum,Average);
	//find and display the max. and min. of x,y,z
	FindMaxMin(max, min,x,y,z);
	ShowMaxMin(max, min);
	//terminate program
       	return 0;
}
