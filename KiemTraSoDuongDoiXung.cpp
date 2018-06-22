#include"bai1.h"
int KiemTraSoDoiXung(int n)
{
	int m = 0;
	int a = n;
	int b;
	while (a > 0)
	{
		b = a % 10;
		m = m * 10 + b;
		a = a/ 10;
	}
	if (m == n)
	{
		return 1;
	}
	return 0;
}
void LietKeCacDongCoSoDuongDoiXung(int a[max_dong][max_cot], int& m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		int dem = 0;
		for (int j = 0; j < n; j++)
		{
			if (KiemTraSoDoiXung(a[i][j]) == 1)
			{
				dem++;
			}
		}
		if (dem != 0)
		{
			printf("Dong %d co so duong doi xung\n", i + 1);
		}
	}
}