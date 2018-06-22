#include <stdio.h>
#include <conio.h>
int main()
{
	int n, a, b, c, s;
	printf("Nhap vao so n ");
	scanf_s("%d", &n);
	a = n / 100;
	b = (n - a * 100) / 10;
	c = (n - a * 100 - b * 10);
	s = a + b + c;
	printf("Tong cac so la %d", s);
	_getch();
}