
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;

int mersenne(int x) {
	x = (2 * x) - 1;

	return x;
}

int main() 
{
	int x, y,z;
	 
	for(y=1;y<=50;y++)
	{
		
		
		cout << mersenne(y) << endl;
		
	}
}

