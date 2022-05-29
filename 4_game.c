#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, y = 0;
	int dir;
	int size_x, size_y;
	int **map;
	int cnt = 0;

	scanf("%d %d", &size_x, &size_y);
	map = (int **)malloc(sizeof(int *) * (size_y));
	for (int i = 0; i < size_y; i++)
		map[i] = (int *)malloc(sizeof(int) * (size_x));

	scanf("%d %d %d", &x, &y, &dir);
	
	for (int i = 0; i < size_y; i++)
		for (int j = 0; j < size_x; j++)
			scanf("%d", &map[i][j]);
	
	while (1)
	{
		if (dir == 0 && )
		
}
