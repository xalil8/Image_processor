
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;
void key(string cevap);

int main()
{
	string cevap;
	setlocale(LC_ALL, "Turkish");
	cout << "ayaðýný yorganýna göre ......"<< endl;
	cout << "yukarýdaki soruda boþluða ne gelmelidir yazýnýz" << endl;
	
	cin >> cevap;
	
	key(cevap);
	return 0;
}
void key(string word)
{
	// string sorunun_cevabý = "uzat"; //gerek yok

	if (word == "uzat")
		cout << "cevabýnýz  doðru tebrikler" << endl;
	else
	{
		
		for (int a = 0; a < 4; a++)
		{
			cout << "cevabýnýz yanlýþ,tekrar deneyiniz" << endl;
			cin >> word;
			if (word == "uzat")
			{
				cout << "cevabýnýz doðru" << endl;
				break;
			}

			if (a ==3)
				cout << "5 hakkýnýzý kullandýnýz.Çalýþýp daha sonra tekrar deneyiniz" << endl;
		}

		//burda biraz daha komplex denedim olmadý, belký biraz ugrasýrsam olabýlýr
   /*	while (word != "uzat")
	   {
		   if (word == "uzat")
		   {
			   cout << "cevabýnýz doðru" << endl;
			   break;
		   }

		   else
		   {
			   for (int a = 0; a < 4; a++)
			   {
				   cin >> word;
				   cout << "cevabýnýz yanlýþ,tekrar deneyiniz" << endl;
				   if (word == "uzat")
				   {
					   cout << "cevabýnýz doðru" << endl;
					   break;
				   }

			   }
			   cout << "5 defa giriþ yaptýnýz calýsýp tekrar geliniz";
		   }
	   }

	   */

	}

}
