//40.	Write a program to count number of objects created for above class Complex.
// Use static data member and member function.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class complex {
	int real;
	int img;
	static int count;
public:
	complex();
	complex(int, int);

	void accept();
	void display();

	int getReal();
	void setReal(int);
	static void showCount();
};

int complex::count;

complex::complex() {
	real = 0;
	img = 0;
	count++;
}

complex::complex(int r, int i = 0) {
	real = r;
	img = i;
	count++;

	cout << r << "+ i" << i << endl;
}

void complex::accept() {
	cout << "Enter the real value and img value" << endl;
	cin >> real >> img;
}
void complex::display() {
	char ch;
	ch = (img >= 0) ? '+' : '-';
	cout << real << ch << abs(img) << "i" << endl;
}
int complex::getReal() {
	return real;
}
void complex::setReal(int r) {
	real = r;
}

void complex::showCount() {
	cout << "Number of objects are: " << count << endl;
}

int main() {
	complex c1;
	complex c3(10);
	complex c4(5, 6), c5, c6;

	complex c2(4, 5);

	c2.display();

	complex::showCount();

	return 0;

}