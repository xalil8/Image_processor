#include<iostream>
#include <iomanip>
using namespace std;
void swap(int *x, int *y);
int main()
{	int first, second;
	cout << "enter the firs number" << endl;
	cin >> first;
	cout << "enter the second number" << endl;
	cin >> second;
	cout << "after swapping process" << endl;
	swap(&first ,&second);	
	cout << "first=" << first << "second=" << second;
	return 0;
}
void swap(int *x,int *y)
{	int trader = *x;
	*x = *y;
	*y = trader;	
}