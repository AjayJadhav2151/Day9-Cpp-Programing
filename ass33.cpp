//33.	Modify above assignment - 32 to hold record of five books.
// Display the records of all the books using a function.

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
typedef struct Book
{
	int bookId;
	char title[20];
	double price;
}BOOK;
void Display(BOOK b[]) {
	for (int i = 0; i <= 5; i++) {
		printf("ID %d Title %s Price %lf\n", b[i].bookId, b[i].title, b[i].price);
	}
}
int main() {
	
	BOOK a[5];
	printf("Enter the 5 book deatils\n");
	for (int i = 0; i <= 5; i++) {
		scanf("%d%s%lf", &a[i].bookId, &a[i].title, &a[i].price);
	}
	Display(a);

	return 0;
}