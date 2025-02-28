//39.	Implement class Complex with real(int) and imaginary(int) parts as data members of class.
// Implement below functions inside this class.
//default constructor, parameterized constructor, getter functions for real and imaginary parts, 
// setter functions for real and imaginary parts, display function.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class complex {
	int real;
	int img;
public:
	complex();
	complex(int, int);

	void accept();
	void display();
	
	int getReal();
	void setReal(int);
};

complex::complex() {
	real = 0;
	img = 0;
}

complex::complex(int r, int i) {
	real = r;
	img = i;
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
int complex ::getReal() {
	return real;
}
void complex::setReal(int r) {
	real = r;
}

int main() {
	complex c1;
	c1.display();

	complex c2(12,24);
	c2.display();

	complex c3;
	c3.accept();
	c3.display();
	cout << "Real of c2 " << c2.getReal() << endl;
	c2.setReal(100);
	c2.display();
	return 0;
}