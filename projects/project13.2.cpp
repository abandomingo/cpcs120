#include <iostream>
#include <math.h>
using namespace std;


void showArray(int *arr, int size)
{
	for(int i=0; i<size; i++)
	{
	cout<<*(arr+i)<<" ";
	}
}


	int main()
	{
	int size = 10;
	int arr[10];
  	cout << "Enter 10 numbers: ";
	// input 10 integers into array//
	for (int i=0; i<10 ; i++)
	{
		cin >> *(arr+i);
		cout << " ";
	}
	
	//display the array
	cout<<"The array is: \n";
	showArray(arr, size);
  	// calculate max min//
	int min = *(arr+0);
	int max = *(arr+0);
	float avg = 0;
  
	for(int i=0; i<size; i++)
	{
	if(min>*(arr+i))
		min = *(arr+i);
	if(max<*(arr+i))
		max = *(arr+i);
		avg = avg + *(arr+i);
	}
  
	//calculate average value
	avg = avg / size;
  
	//display the result
	cout<< endl <<"Maximum = " <<max;
	cout<< "\nMinimum = " <<min;
	cout<< "\nAverage = " <<avg;
  
	return 0;
	}

