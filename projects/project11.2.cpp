#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <algorithm>

using namespace std;
	class car
	{
	private:
		int speed;
		string make;
		string model;
		int year;
	public:
		car()
		{

		}
		car(int s, string m)
		{
			speed = s;
			make = m;
		}
		car(string m, string mm, int y)
		{
			make = m;
			model = mm;
			year = y;
			speed = 0;
		}
		int getspeed()
		{
			return speed;
		}
		void setspeed(int s)
		{
			speed = s;
		}

		int speedup()
		{
			speed += 10;
			return speed;
		}
		int brake()
		{
			if (speed >= 10) speed -= 10;
			return speed;
		}
};

int main()
{
	car lamborgini;
	car mycar("Toyota", "Camry", 2020);


	for (int i= 0; i < 23 ; i++)
	{
		cout << "Im speeding up ";
		mycar.speedup();
		cout << "Your speed is " << mycar.getspeed() << endl;
	}

	for(int i = 0; i < 23; i++)
	{
		cout << "I, pushing the brake ";
		mycar.brake();
		cout << "Your speed is " << mycar.getspeed() << endl;
	}

	return 0;
}
