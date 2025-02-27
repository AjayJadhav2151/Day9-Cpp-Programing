//33.	Modify above assignment - 32 to hold record of five books.
// Display the records of all the books using a function.

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
struct Book
{
	int bookId;
	char title[20];
	double price;
};
void Display( struct Book BOOK) {
	for (int i = 0; i <= 5; i++) {
		printf("%d %s %lf\n", BOOK.bookId, BOOK.title, BOOK.price);
	}
}
int main() {
	struct Book BOOK;
	printf("Enter the 5 book deatils\n");
	for (int i = 0; i <= 5; i++) {
		scanf("%d%s%lf", &BOOK.bookId, &BOOK.title, &BOOK.price);
	}
	Display(BOOK);

	return 0;
}