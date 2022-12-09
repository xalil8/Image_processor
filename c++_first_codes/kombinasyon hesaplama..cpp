
#include<cmath>
#include <iostream>
#include<locale.h>
using namespace std;


int faktöriyel(int n, int r){

 int x=1, y=0,z=0,t=1;

 while(y<n)
	 {
	 
	
	 y = y + 1;

	 x = x*y;


	 }
	
 while (z < r)
 {
	 z = z + 1;

		
	 t = t* z;


 }

 int m = x/(t* (n - r));
 
 cout <<"x=" <<x << endl <<"t="<< t << endl <<"n="<< n << endl <<"r="<< r << endl <<"m="<< m << endl;
 cout << "kombinasyon(" << n << "," << r << ") =" << m<<endl;
return 0;
}



int main() {
	
	cout << faktöriyel(5, 3)<<endl;
	
	
	return 0;
}