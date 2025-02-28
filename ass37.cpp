//37.	Overload function “Add” to add two integers, floats and doubles.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}
float add(float a, float b) {
	return a + b;
}
double add(double a, double b) {
	return a + b;
}

int main() {
	int a, b;

	cout <<"add function is int" << add(4, 5) << endl;
	cout <<"add function is float" << add(4.5, 5.4) << endl;
	cout <<"add function is double" << add(4, 5) << endl;
}