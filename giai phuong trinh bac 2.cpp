#include <stdio.h>
#include <conio.h>
#include <cmath>
int main()
{
	int a, b, c, delta;
	printf("Nhap vao cac gia tri a,b,c ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	delta = b*b - 4 * a * c;
	if (delta < 0)
	{
		printf("Phuong trinh vo nghiem");
	}
	else
	{
		if (delta == 0)
		{
			float x = (-b) / (2 * a);
			printf("Phuong trinh co nghiem kep la %f", x);
		}
		else
		{
			float x1 = ((-b) - sqrt(delta)) / (2 * a);
			float x2 = ((-b) + sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem la %f %f", x1, x2);
		}
	}

	_getch();
}
