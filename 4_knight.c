#include <stdio.h>

int main()
{
	int x, y = 0;
	char tmp = 0;
	int	cnt = 0;

	scanf("%c%d", &tmp, &y);
	x = tmp - 97;
	y = y - 1;
	printf("x=%d, y=%d\n", x, y);
	// 왼쪽
	if (x >= 2)
	{
		if (y != 0)
			cnt++;
		if (y != 7)
			cnt++;
	}
	// 오른쪽
	if (x <= 5)
	{	
		if (y != 0)
			cnt++;
		if (y != 7)
			cnt++;
	}
	// up
	if (y >= 2)
	{
		if (x != 0)
			cnt++;
		if (x != 7)
			cnt++;
	}
	// down
	if (y <= 5)
	{
		if (x != 0)
			cnt++;
		if (x != 7)
			cnt++;
	}
	printf("%d\n", cnt);

}
