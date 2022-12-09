#include <iostream>
using namespace std;
int main()
{
	int min, max;
	
	int a[10]; //10 elements
	cout << "Enter 10 values:"; //prompts user for 10 values.
	for (int i = 0; i < 10; i++)
	{
		cout << "\nEnter value: ";
		cin >> a[i]; // puts values in array
	}

	min = a[0];
	max = a[0];
	for (int i = 1; i < 10; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		else if (max < a[i])
		{
			max = a[i];
		}
	}

	cout << "Maximum number is: " << max << endl;
	cout << "Minimum number is:" << min << endl;
	return 0;
}
