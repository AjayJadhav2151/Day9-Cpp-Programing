//34.	Write a program to copy one structure into another –
//a.On element by element basis.
//b.Copying an entire structure to another.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
struct Book
{
	int bookId;
	char title[20];
	double price;
};
int main() {
	struct Book BOOK;
	printf("Enter the book deatils\n");
	scanf("%d%s%lf", &BOOK.bookId, &BOOK.title, &BOOK.price);
	printf(" 1st structure: %d %s %lf\n", BOOK.bookId, BOOK.title, BOOK.price);

	struct Book com = BOOK;
	printf("Copying an entire structure to another.: %d %s %lf\n", com.bookId, com.title, com.price);
	return 0;
}