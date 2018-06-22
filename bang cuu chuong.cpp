#include <stdio.h>
#include <conio.h>
int main()
{
	int i, j, tich;
	tich = 0;
	for (i = 2; i <= 9; i++)
	{
		printf("bang cuu chuong %d la : \n", i);
		for (j = 1; j <= 9; j++)
		{
			tich = i*j;
			printf(" %d x %d = %d \n", i, j, tich);
		}
		printf("\n");
	}
	_getch();
}