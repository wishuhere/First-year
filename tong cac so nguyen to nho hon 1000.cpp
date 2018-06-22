#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int i, j, kt, s = 0;
		for (i = 2; i <= 1000; i++)
		{
			kt = 1;
			for (j = 2; j <= (int)sqrt(i); j++)
				if (i%j == 0)
				{
					kt = 0;
					break;
				}
			if (kt == 1)
				s += i;
		}
		printf("Tong cac so nguyen to nho hon 1000 la: %d", s);
		_getch();
}