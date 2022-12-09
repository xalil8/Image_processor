#include<iomanip>
#include<iostream>
#include<cmath>
using namespace std;

void normalizeMoney(float& dollars, int cents = 150);

int main()
{
	int cents;
	float dollars;
	cout << setprecision(2) << fixed << showpoint;
	cents = 95;
	cout << "\n we will now add 95 cents to our dollar total \n";
	normalizeMoney(dollars,95);
	// call func 
	cout << "converting cents to dollars resulted in " << dollars << "dollars\n";
	cout << "\n we will now add 193 cents to our dollar total \n";
	normalizeMoney(dollars, 193);
	// fil
	cout << "converting cents to dollars resulted in " << dollars << "dollars\n";
	cout << "\n we will now add the defoult value cents to our dollar total \n";
	// fill
	normalizeMoney(dollars);
	cout << "onverting cents to dollars resulted in " << dollars << "dollars\n";
	return 0;
}
void normalizeMoney(float& dollars, int cents)
{
	float total = 0;
	//fill
	
	static float sum = 0.0;
	//fill
	dollars = static_cast<float>(cents) / 100; // burasý önemli , cents int di, bu yuzden virgulden sonrasý icin static cast le bunu float a dönüþtürdük
	total = total + dollars;
	sum = sum + dollars;
	cout << "we have added another $ " << dollars << "to our total " << endl;
	cout << "our total so far is $" << sum << endl;
	cout << "the value of our local variable total is $" << total << endl;
}
