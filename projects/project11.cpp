#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;

void copyData(string data, string names[])
{	
	//gets names from data file//
	string name;
	ifstream inFile;
	inFile.open(data);
	int i = 0;
	while (inFile >> name)
	{
		//puts data file names into an array//
		names[i] = name;
		i++;
	}
}
void displaynames(string names[])
{
	//lists and displays the 10 names//
	for (int i = 0; i < 10; i++) cout << names[i] << endl;

}

int main()
{
	//gets file data and displays it using arrays//
	string names[10];
	copyData("data.txt", names);
	displaynames(names);
	cout << endl;
	//sorts names using algorithm//
	sort(names, names + 10);
	displaynames(names); 
}


