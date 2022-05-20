#include <stdio.h>

int main()
{
	int arr[100][100];
	int small[100];
	int result;
	int n, m;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		small[i] = 10000;
		for (int j = 0; j < m; j++)
		{
			scanf("%d", &arr[i][j]);
			if (small[i] > arr[i][j])
				small[i] = arr[i][j];
		}
	}
	result = small[0];
	for (int i =0; i < n; i++)
	{
		if (result < small[i])
			result = small[i];
	}
	printf("result = %d\n", result);
}
