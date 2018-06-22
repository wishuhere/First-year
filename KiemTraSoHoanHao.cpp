#include"bai1.h"
int KiemTraSoHoanChinh(int n)
{
	int s = 0;
	for (int i = 1;i < n; i++)
	{
		if (n%i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
	{
		return 1;
	}
	return 0;
}
void LietKeCacDongCoSoHoanHao(int a[max_dong][max_cot], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoHoanChinh(a[i][j]) == 1)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
			printf("Dong %d co so hoan chinh\n", i + 1);
		}
	}
}