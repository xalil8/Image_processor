
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;
void key(string cevap);

int main()
{
	string cevap;
	setlocale(LC_ALL, "Turkish");
	cout << "aya��n� yorgan�na g�re ......"<< endl;
	cout << "yukar�daki soruda bo�lu�a ne gelmelidir yaz�n�z" << endl;
	
	cin >> cevap;
	
	key(cevap);
	return 0;
}
void key(string word)
{
	// string sorunun_cevab� = "uzat"; //gerek yok

	if (word == "uzat")
		cout << "cevab�n�z  do�ru tebrikler" << endl;
	else
	{
		
		for (int a = 0; a < 4; a++)
		{
			cout << "cevab�n�z yanl��,tekrar deneyiniz" << endl;
			cin >> word;
			if (word == "uzat")
			{
				cout << "cevab�n�z do�ru" << endl;
				break;
			}

			if (a ==3)
				cout << "5 hakk�n�z� kulland�n�z.�al���p daha sonra tekrar deneyiniz" << endl;
		}

		//burda biraz daha komplex denedim olmad�, belk� biraz ugras�rsam olab�l�r
   /*	while (word != "uzat")
	   {
		   if (word == "uzat")
		   {
			   cout << "cevab�n�z do�ru" << endl;
			   break;
		   }

		   else
		   {
			   for (int a = 0; a < 4; a++)
			   {
				   cin >> word;
				   cout << "cevab�n�z yanl��,tekrar deneyiniz" << endl;
				   if (word == "uzat")
				   {
					   cout << "cevab�n�z do�ru" << endl;
					   break;
				   }

			   }
			   cout << "5 defa giri� yapt�n�z cal�s�p tekrar geliniz";
		   }
	   }

	   */

	}

}
