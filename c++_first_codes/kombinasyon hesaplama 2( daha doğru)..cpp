
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;


int fakt�riyel(int x)
{
	int y = 1,z=x;
	while (y < (z-1))
	{
		
		y++;
		x = y *x;
	}


	return x;
}
int kombinasyon(int n, int r) {

	

	return  fakt�riyel(n) / (fakt�riyel(r) * fakt�riyel(n - r));
}
int main() {
	setlocale(LC_ALL, "Turkish");
	int p, k;
	cout << "Neyi hesaplamak istiyorsunuz? �r= kombinasyon(n,r)"<<"\n"<<"S�rayla n ve r yi girip enter a bas�n�z" << endl;
	cout << "n =";
	cin >> p;
	cout << "r=";
	cin >> k;

	cout<<"kombinasyon("<<p<<","<<k<<") ="<< kombinasyon(p,k);


	return 0;
}