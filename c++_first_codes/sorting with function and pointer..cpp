#include<iostream>
#include<string>
#include<locale.h>
using namespace std;

void piramit()
{
	int t = 0, a, j = 0, b = 1;


	for (int i = 0; i < 6;)
	{
		for (; j < 5; j++)
		{
			cout << " ";
		}


		for (a = 0; a < b; a++)                  //-----*-----
		{										 //----***----							
												 //---*****---								
			cout << "*";						 //--*******--	
												 //-*********-
												 //***********
		}


		for (; t < 5; t++)
		{
			cout << " ";
		}
		j = 0;
		t = 0;
		i++;
		j = j + i;
		t = t + i;
		b = b + 2;

		cout << endl;
	}
}
void sort(int* x)
{
	cout << "now , your array are = "<<endl;
	int new_dizi[15];
	for (int q = 0,a=0; q < 15; q++,a++)
	{
		*(new_dizi + a) = *(x+a);
		
	}
	for (int m = 0; m < 15; m++)
		cout << new_dizi[m] << "\t";
	////////////////////////////////////////
	cout <<endl<< "after all procces, your array is sorted , array is become ="<<endl;

	for (int i = 0; i < 15; i++)
	{
		int max = new_dizi[0];
		int temp;
		for (int j = i; j < 15; j++)
		{

			if (new_dizi[j] > max)
			{
				temp = max;
				max = new_dizi[j];
				new_dizi[j] = temp;

			}

		}
		
		cout << max << "\t";
	}
	


}
int main ()
{	setlocale(LC_ALL, "Turkish");

int dizi[15]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};


{//sorting max to min

	/*for (int i = 0; i < 15; i++)
	{
		int max = dizi[0];
		int temp;
		for (int j = i; j < 15; j++)
		{
			
			if (dizi[j]>max)
			{
				 temp=max;
				 max = dizi[j];
				 dizi[j] = temp;
				 
			}
			
		}
		cout << max << "\t";
	}
	|*/











}

sort(dizi);

	return 0;
}
