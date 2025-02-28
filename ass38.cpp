//38.	Write a single function “Multiply” to multiply two or three or four integers passed depending on call.
// \Use default value arguments.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int Multiply(int a, int b, int c=1, int d=1) {
	return a * b * c * d;
}
int main() {
	cout << Multiply(2,2,2,2) << endl;
	cout << Multiply(2,2,2) << endl;
	cout << Multiply(2,2) << endl;
}