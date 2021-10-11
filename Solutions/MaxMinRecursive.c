#include <stdio.h>
#include <stdlib.h>

// Recursive Function for Finding Minimum
int min_rec(int a[], int n, int x, int i)
{
	if (i == n)
		return x;
	if (a[i+1] < x)
		return min_rec(a, n, a[i+1], i+1);
	else
		return min_rec(a, n, a[i], i+1);
}

// Recursive Function for Finding Maximum
int max_rec(int a[], int n, int x, int i)
{
	if (i == n)
		return x;
	if (a[i+1] > x)
		return max_rec(a, n, a[i+1], i+1);
	else
		return max_rec(a, n, a[i], i+1);
}

int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	int* arr = (int*) malloc(n * sizeof(int));
	printf("Enter the elements of the array:\n");

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	int min = min_rec(arr, n, arr[0], 0);
	int max = max_rec(arr, n, arr[0], 0);

	printf("total number of elements in array: %d\n",n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("(input by user)\n");
	printf("[%d, %d]", min, max);

	return 0;
}