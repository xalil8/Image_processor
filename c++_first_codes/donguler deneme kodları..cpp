

#include <iostream>
#include<locale.h>
using namespace std;
int main()
{//soru 1 = 1 den 100 e kadar olan tek say�lar� bast�r�n
	setlocale(LC_ALL, "Turkish");

	int x=1;
	int yazi = 1;
		while (yazi < 100 && x < 100)
		{
			
			cout << yazi << "nci say� ="<<x<<endl;
			x = x + 2;
			yazi = yazi + 1;

		}

	return 0;
}




