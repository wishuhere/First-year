#include"bai1.h"
int KiemTraSoNguyenTo(int n)
{
	int demuoc=0;
	for (int i=1;i<=n;i++)
		if (n%i == 0)
		{
			demuoc++;
		}
	if (demuoc == 2)
	{
		return 1;
	}
	return 0;
}
void LietKeCacDongCoSoNguyenTo(int a[max_dong][max_cot], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoNguyenTo(a[i][j]) == 1)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
			printf("Dong %d co so nguyen to\n", i + 1);
		}
	}
}