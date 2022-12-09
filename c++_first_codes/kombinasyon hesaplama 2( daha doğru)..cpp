
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;


int faktöriyel(int x)
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

	

	return  faktöriyel(n) / (faktöriyel(r) * faktöriyel(n - r));
}
int main() {
	setlocale(LC_ALL, "Turkish");
	int p, k;
	cout << "Neyi hesaplamak istiyorsunuz? Ör= kombinasyon(n,r)"<<"\n"<<"Sýrayla n ve r yi girip enter a basýnýz" << endl;
	cout << "n =";
	cin >> p;
	cout << "r=";
	cin >> k;

	cout<<"kombinasyon("<<p<<","<<k<<") ="<< kombinasyon(p,k);


	return 0;
}