//35.	Write a program to accept marks of a student in ‘n’ subjects.
// Allocate the space for the array of marks dynamically.
// Display average of marks.Use cin, cout, new, delete.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int main() {
	int* p, n , sum =0, avg;
	cout<< "Enter the number of subject" << endl;
	cin >> n;
	p = new int[n];
	cout << "Enter the Marks for subject" << endl;
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
		sum = sum + p[i];
	}
	avg = sum / n;
	cout << "Average of marks is :" << avg << endl;
	delete[]p;
	return 0;
}