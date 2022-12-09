#include <iostream>
using namespace std;

int main()
{int m = 0;
	
		int a[5];
		for (int q = 0; q < 5; q++)
		{	cout << m << " . number of your arrange is : " << endl;
			cin >> a[q];
			m=m+1;
		}
		cout << "a[0] is : " << a[0] << endl << "a[4] is : " << a[4] << endl;
	// burdan sonrasý sýralama, küçükten büyüðe , burdan öncesi seriyi oluþturup seriye sayýlar atama
		cout << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3] << "\t" << a[4] << "\t" << endl;
		for (int j=0;j<5;j++)
		{
			for (int i = 0; i < 5; i++)
			{
				if (a[j] < a[i])
				{
					int swapper = a[j];
					a[j] = a[i];
					a[i] = swapper;
					cout << "comparing " << a[i] << " vs " << a[0] << endl;
				}
				cout << "after proccess number = " << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3] << "\t" << a[4] << "\t" << endl;
			}
		}
		cout << "after last proccess number = " << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3] << "\t" << a[4] << "\t" << endl;
		return 0;
}
