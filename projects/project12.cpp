#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

struct PersonInfo 
{
	string name,
	       address,
	   	city;
};

struct Student
{ 
	int studentID;
	PersonInfo pData;
	short year;
	double gpa;
};

void fillArray(Student s[])
{
	for (int i =0 ; i < 3; i++)
	{
		cout << "What is his student ID? ";
		cin >> s[i].studentID;
		cin.ignore();

		cout << "What is his name?";
		getline(cin, s[i].pData.name);
	}
}
void showData(const Student s[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << s[i].studentID ;
		cout << " " << s[i].pData.name << endl;
	
	}
}

int search(Student arr[], int n, string x)
{
	int i;
	 for (i = 0; i < n; i++)
		 if (arr[i].pData.name == x)
			return i;
	 return -1;
}

int binarySearch(string a[], int first, int last, string search_num)
{
	int middle;
	if (last >= first)
	{
		middle = (first + last) / 2;
		if (a[middle] == search_num)
		{
			return middle + 1;
		}
		
		else if (a[middle] < search_num)
		{
			return binarySearch(a, middle + 1, last, search_num);
		}

		else
		{
			return binarySearch(a, first, middle - 1, search_num);
		}
	}
	return -1;
}
int main()
{
	Student Students[10];
	fillArray(Students);
	string hisname;
	cout << "What is his name?";
	cin >> hisname;
	int result = search(Students, 3, hisname);
	cout << "Its here " << result << endl;
	string name[3];
	for (int i = 0; i < 3; i++) name[i] = Students[i].pData.name;
	int z = sizeof(name) / sizeof(name[0]);
	sort(name, name + z); 
	cout << "Here is the list sorted" << endl;
	for (int y = 0; y < z; y++) 
	{	cout << name[y] << endl;	}
	result = binarySearch(name, 0, 3, hisname);
	cout << "Its here " << result;
	showData(Students);
}















































