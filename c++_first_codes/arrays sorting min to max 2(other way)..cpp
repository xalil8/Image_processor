#include <iostream>
using namespace std;

int main()
{int m = 0;
	
		int a[4];
		for (int q = 0; q < 4; q++)
		{	cout << m << " . number of your arrange is : " << endl;
			cin >> a[q];
			m=m+1;
		}
		cout << "a[0] is : " << a[0] << endl << "a[3] is : " << a[3] << endl;
	// burdan sonras� s�ralama, k���kten b�y��e , burdan �ncesi seriyi olu�turup seriye say�lar atama
		cout << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3]<<"\t" << endl;
		for (int j=0;j<4;j++)
		{
			for (int i = j; i < 4; i++)
			{
				if (a[j] > a[i])
				{
					int swapper = a[j];
					a[j] = a[i];
					a[i] = swapper;
					cout << "comparing " << a[i] << " vs " << a[0] << endl;
				}
				cout << "after proccess number = " << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3]<< "\t" << endl;
			}
		}
		cout << "after last proccess number = " << a[0] << "\t" << a[1] << "\t" << a[2] << "\t" << a[3] << "\t" << endl;
		return 0;
}
