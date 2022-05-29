#include <stdio.h>

int main()
{
	int n, k;
	int cnt = 0;
	
	scanf("%d %d", &n, &k);
	while (n != 1)
	{
		if (n % k == 0)
		{
			n = n/k;
			cnt++;
		}
		else
		{
			n = n - 1;
			cnt++;
		}
	}
	printf("cnt = %d\n", cnt);
}
