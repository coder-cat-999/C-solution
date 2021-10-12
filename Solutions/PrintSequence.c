#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("Enter a number n. ");
	scanf("%d",&n);
	int row = 1 + 2 * (n -1);
	int **arr = malloc(row*sizeof(int*));
	for (int i = 0; i < row; i++ )
		arr[i] = calloc(row,sizeof(int));

	int init = 0;
	int end = row;
	int x = n;

	while (init < end)
	{
		for (int i = init; i < end; i++)
		{
			for (int j = init; j < end; j++)
			{
				arr[i][j] = x;
			}
		}

		init++;
		end--;
		x--;
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}