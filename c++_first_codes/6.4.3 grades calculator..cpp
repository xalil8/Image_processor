#include<iostream>
https://vidoza.net/sigomkvuwioa.html
using namespace std;
int grader(int x);
int main()
{	int grades_number, sum = 0,grade,avg_grade;
	cout << "enter the number of grades" << endl;
	cin >> grades_number;
	for (int counter = 1; counter -1< grades_number; counter++)
	{		
		cout << "enter the grades " << counter << endl;
		cin >> grade;
		sum = sum + grade;
	}
	avg_grade = sum / grades_number;
	cout <<"avg grade ="<< avg_grade<<endl;
	grader(avg_grade);	
	return 0;
}
int grader(int x)
{	char note;
	if (90 <= x && x <= 100)
		note = 'A';
	if (80 <= x && x <= 89)
		note = 'B';
	if (70 <= x && x <= 79)
		note = 'C';
	if (60 <= x && x <= 69)
		note = 'D';
	if (0 <= x && x <= 59)
		note = 'F';
	cout << "your note = " << note;
	return x;
}

