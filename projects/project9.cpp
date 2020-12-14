#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <ctime>
//#include <cmath>

using namespace std;
void Read(int &a, int  &b, int &c)
{
    cout << "enter x, y and z:";
    cin >> a >> b >> c;
}
int CompSum(int x, int y, int z)
{
    int sum = x + y + z;
    return sum;
}
void CompAve(int x, int y, int z, float &Average) {
    Average = (x + y + z) / 3.0;
}
void Display(int x, int y, int z, int Sum, float Average) {
    cout << "Sum is " << Sum << endl;
    cout << "Average is " << Average;
}


int main()
{
    //declare identifiers
    int x=0, y=0, z=0, Sum;
    float Average;
    //read three integer numbers into x , y, and z
    Read(x, y, z);
    cout << x << y << z;
    //compute x+y
    Sum = CompSum(x, y, z);
    //compute the average of x, y, and z
    CompAve(x, y, z, Average);
    //display Sum and Average
    Display(x, y, z, Sum, Average);
    return 0;































}
