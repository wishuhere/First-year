#include<cmath>
#include"bai1.h"
int KiemTraSoChinhPhuong(int n)
{
	double i = sqrt(n);
	if (n == (int)i*i)
	{
		return 1;
	}
	return 0;
}
void LietKeCacDongCoSoChinhPhuong(int a[max_dong][max_cot], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoChinhPhuong(a[i][j]) == 1)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
			printf("Dong %d co so chinh phuong\n", i + 1);
		}
	}
}