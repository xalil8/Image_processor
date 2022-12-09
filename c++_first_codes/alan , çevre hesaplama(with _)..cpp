#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;
const double PI = 3.14;
const double RATE = 0.25;
void findArea(float, float&);
void findCircumference(float, float&);
int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;
	cout << "main function outer block" << endl;
	cout << "list the identifiers that are active here" << endl << endl;
	{float area;
	cout << "main function first inner block" << endl;
	cout << "list the identifiers that are active here" << endl << endl;
	findArea(radius, area);
	//fill in the code find area 
	cout << "the radius=" << radius << endl;
	cout << "the area =" << area << endl << endl;
	}
	{
		float radius = 10;
		float circumference;
		cout << "main function second inner block" << endl;
		cout << "list the identifiers that are active here" << endl << endl; 
		findCircumference(radius, circumference);
		//fill in here
		cout << "the radius= " << radius << endl;
		cout << "the circumference =" << circumference << endl << endl;

	}
	cout << "main function after all the calls" << endl;
	cout << "list the identifiers that are active here" << endl << endl;	
	     return 0;
}
void findArea(float rad, float& answer)
{
	//answer = rad * rad * PI;  yada 
	answer = pow(rad, 2) * PI;
	cout << "area function " << endl << endl;
	cout << "list the identifiers that are active here" << endl << endl;
}
	void findCircumference(float lenght,float& distance)
    {
		distance = 2 * PI * lenght;
		cout << "circumference function" << endl << endl;
		cout << "list the identifiers that are active here" << endl << endl;
    }