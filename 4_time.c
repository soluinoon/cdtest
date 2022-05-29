#include <stdio.h>

int main()
{
	int n;
	int cnt = 0;
	int	tmp[6];

	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= 59; j++)
		{
			for (int k = 0; k <= 59; k++)
			{
				tmp[0] = k % 10;
				tmp[1] = k / 10;
				tmp[2] = j % 10;
				tmp[3] = j / 10;		 
				tmp[4] = i % 10;
				tmp[5] = i / 10;
				for (int p = 0; p < 6; p++)
				{
					if (tmp[p] == 3)
					{
						cnt++;
						break;
					}
				}
			}
		}
	}
	printf("%d\n", cnt);
}
