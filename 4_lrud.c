#include <stdio.h>

int main()
{
	int	crt = 0;
	int n;
	int x, y;
	char str[100];
	
	// 입력부분
	scanf("%d\n", &n);
	for (int i = 0; i < n; i++)
		scanf("%c", &str[i]);
	// 
	x = 0;
	y = 4;
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'U' && y != 0)
			y++;
		else if (str[i] == 'D' && y != 4)
			y--;
		else if (str[i] == 'R' && x != 4)
			x++;
		else if (str[i] == 'L' && x != 0)
			x--;
	}
	printf("%d %d\n", x, y);
}		
	
