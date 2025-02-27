//32.	Define a structure “Book” having members – 
// bookId, title, price.Use typedef to name this structure “BOOK”.
// Accept the data for a book and display the record.
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
	printf("%d %s %lf\n", BOOK.bookId, BOOK.title, BOOK.price);
	return 0;
}