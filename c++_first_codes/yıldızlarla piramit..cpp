#include<iostream>
#include<string>
#include<locale.h>
using namespace std;



int main ()
{	setlocale(LC_ALL, "Turkish");

int t=0,a, j=0,b=1;


	for (int i = 0; i < 4;)
	{
		for (; j <5; j++)
		{
		cout << "-";
		}


		for (a=0;a<b;a++)                        //-----*-----
		{										 //----***----							
												 //---*****---								
			cout << "*";						 //--*******--	
												 
		}											


		for (; t < 5; t++)
		{
			cout << "-";
		}
		j = 0;
		t = 0;
		i++;
		j = j + i;
		t = t + i;
		b = b + 2;
		
		cout << endl;
	}
	return 0;
}
/*
-----*-----
----***----
---*****---
--*******--
*/