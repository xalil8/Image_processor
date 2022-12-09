
#include <iostream> 
#include<locale.h>
using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");


	int dogum_gun, dogum_yil, dogum_ay,dogum_gun1,dogum_ay1,dogum_yil1;
	cout << "dogum gununuzu\n" << "dogdugunuz ayi\n" << "dogdugunuz yili\n"<<"giriniz\n";
	cin >> dogum_gun;
	cin >> dogum_ay;
	cin >> dogum_yil;
	cout << "dogum gununuz= " << dogum_gun <<"\n"<< "dogdugunuz ay= " << dogum_ay<<"\n" << "dogdugunuz yil= " << dogum_yil<<"\n";

	
	if (dogum_yil > 2019 || dogum_yil < 0)
	{
		cout << "þuanki yaþýnýz =" << "yanlýþ bilgi girdiniz.Lütfen tekrar deneyiniz.";
	}



	else if ( 1<= dogum_gun && dogum_gun < 27) 
	
{
		
		dogum_gun1 = 27- dogum_gun;
		if (dogum_ay > 10 && dogum_ay <= 12) {
			dogum_ay1 = 22 - dogum_ay;
			dogum_yil1 = 2018 - dogum_yil;
			cout << "yasiniz= " << dogum_gun1 << "gun " << dogum_ay1 << "ay " << dogum_yil1 << "yil ";
		}
		else if (dogum_ay <= 10 && dogum_ay >= 1)
		{
			dogum_ay1 = 10 - dogum_ay;
			dogum_yil1 = 2019 - dogum_yil;
			cout << "Þuanki yaþiniz=" << dogum_gun1 << "gun " << dogum_ay1 << "ay " << dogum_yil1 << "yil ";
		}
		else {
			cout << "þuanki yaþýnýz =" << "yanlýþ bilgi girdiniz.Lütfen tekrar deneyiniz.";
		}

		
		
	}
	else if (dogum_gun >=27 && dogum_gun<=30) 
	{
		dogum_gun1= 57 - dogum_gun;

		if (dogum_ay > 10 && dogum_ay<=12) {
			dogum_ay1 = 22-dogum_ay;
			dogum_yil1 = 2018 - dogum_yil;
			cout << "yasiniz= " << dogum_gun1 << "gun " << dogum_ay1 << "ay " << dogum_yil1 << "yil ";
		}
		else if (dogum_ay<=10 && dogum_ay>=1)
		{
			dogum_ay1 = 10-dogum_ay;
			dogum_yil1 = 2019 - dogum_yil;
			cout << "Þuanki yaþiniz=" << dogum_gun1 << "gun " << dogum_ay1 << "ay " << dogum_yil1 << "yil ";
		}
		else {
			cout << "þuanki yaþýnýz =" << "yanlýþ bilgi girdiniz.Lütfen tekrar deneyiniz.";
		}
	}
	//sex
	
	else {
	cout << "þuanki yaþýnýz =  " << "yanlýþ bilgi girdiniz.Lütfen tekrar deneyiniz.";
}
	return 0;
}
