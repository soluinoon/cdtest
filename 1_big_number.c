#include <stdio.h>

int main()
{
	int N, M, K;
	int arr[1000];
	int big;
	int except;
	int next_big;
	int result = 0;
	int cycle = 0;

	scanf("%d %d %d\n", &N, &M, &K);
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	big = arr[0];
	next_big = arr[0];
	for (int i = 0; i < N; i++)
	{
		printf("arr[%d] = %d\n", i, arr[i]);
		if (arr[i] > big)
		{
			big = arr[i];
			except = i;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] <= big && arr[i] > next_big && i != except)
			next_big = arr[i];
	}
	printf("big = %d, next_big = %d \n", big, next_big);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < K && cycle < M; j++)
		{
			result = result + big;
			cycle++;
		}
		if (cycle >= M)
			break;
		result = result + next_big;
		cycle++;
	}
	printf("result = %d\n", result);
}
	
	
