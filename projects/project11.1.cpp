//q2
//
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <iomanip>

using namespace std;

int a[7]={9,11,15,7,20,30,26};

void displayArray(int a[], int size)
{	
	for(int i = 0 ; i < size; i++)
	{ 
		cout << a[i] << " ";
	}
	cout << endl;
}

void findMaxMin(int a[], int size, int& max, int& min)
{
	max = a[0];
	min = a[0];

	for(int i = 0; i < size; ++i)
	{
		if(max < a[i]) max = a[i];
		if(min > a[i]) min = a[i];
	}
}

float findAverage(int a[], int size){
	float sum = 0;

	for (int i = 0; i < size; ++i){
		sum += a[i];
	}

	return sum/size;
}

void displayMaxMinAve(int max, int min, float average)
{
	cout << fixed << setprecision(2);
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
	cout << "Average = " << average << endl;
	cout << endl;
}

int main( )
{
	//display array a
	cout<< "This is the original array a" << endl;
	displayArray( a, 7);
	//find the maximum and minimum data in array a
	int max, min;
	findMaxMin( a, 7, max, min);
	//find the average of data in array a
	float average;
	average = findAverage( a, 7);
	//display max, min, and average
	displayMaxMinAve(max, min, average);
	//sort  and display the sorted array a
	sort( a, a+7);
	cout<< "This is the sorted form of array a\n";
	displayArray(a, 7);
	return 0;
}
