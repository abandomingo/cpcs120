#include <iostream>
#include <math.h>
using namespace std;
	//display array in matrix format
void showArray(int *arr, int size)
	{
	for(int i=0; i<size; i++)
	{
		cout<<*(arr+i)<<" ";
	}
	}

//function to swap element
void swap(int *arr, int i, int j)
{
	int temp = *(arr+i);
	*(arr+i) = *(arr+j);
	*(arr+j) = temp;
}


int main()
{
int size = 10;
int arr[10];
  
//generate random number
for(int i=0; i<size; i++)
{
*(arr+i) = rand() % 40 + 60;
}
  
//display the array
cout<<"The array is: \n";
showArray(arr, size);
swap(arr, 4, 8);
  
//display the array
cout<<endl<<endl<<"After swapping the array is: \n";
showArray(arr, size);
  
return 0;
}
