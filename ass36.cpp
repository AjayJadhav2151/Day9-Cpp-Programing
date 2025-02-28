//36.	Implement function “Swap” to swap to integers.Use call by reference.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main() {
	int num1, num2;
	cout << "Enter the 1st number" << endl;
	cin >> num1;
	cout << "Enter the 2nd number" << endl;
	cin >> num2;
	swap(num1, num2);
	cout <<"reverse is:" << num1 << "\t" << num2 << endl;
}