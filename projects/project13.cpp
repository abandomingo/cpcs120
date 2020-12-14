#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
	int choice, arr[10], count, low , high , mid, n, i, j, imin, temp;
	while(true)
	{
		cout << "\n1. Fill Array\n";
		cout << "2. Linear Search\n";
		cout << "3. Binary Search\n";
		cout << "4. Selection Sort\n";
		cout << "5. Bubble Sort\n";
		cout << "6. Display Data \n";
		cout << "Enter your choice: (1,2..) ";
		cin >> choice;

		switch(choice)
		{
			case 1:
			cout << "Enter array list\n";
			for (i=0;i<10;i++)
			{	
				cin >> arr[i];
			}
			cout << "Array complete";
			break;
			
			case 2:
			cout << "Enter search element:";
			cin >> n;

			for(i=0; i < 10; i++)
			{
			 if (arr[i] == n)
			 {
			 	cout << "Element present at " << i;
				count = 1;
			 }
			}
			if (count == 0)
			{
				cout << "Element is not found in Array";
			}
			break;

			case 3:
			count = 0, low = 0, high = 10, mid = 0;
		       cout << "Enter search element:";
		       		cin >> n;
				while (low <= high){
				mid = low +(high - low) / 2;

				if (arr[mid] == n)
				{
				cout << "Element present at " << mid << endl;
				count = 1;
				break;
				} 

				if (arr[mid] < n)
					low = mid + 1;
					
				else high = mid - 1;

				}
				if (count == 0)
				{
					cout << "Element is not present" << endl;
				}

				break;

			case 4:
			for (i = 0 ; i < 9; i++) {
			imin = i; 
			for (j = i + 1; j < 10; j++)
			{
			 if (arr[j] < arr[imin])
			{
				imin = j;
			}
			 	temp = arr[i];
				arr[i] = arr[imin];
				arr[imin] = temp;
			}
			}
			break;

			case 5:
			for(i = 0; i < 10; i++)
			{
			for (j=0; j < 9; j++)
			{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			}
			}
			break;

			case 6:

			cout << "Array elements are: \n";
			for (i = 0; i < 10 ; i++)
			{
				cout << arr[i] << " ";
			}

			break;
			default: exit(0);
				
		}
	}
}
	
			
			
			





	       		       
	
