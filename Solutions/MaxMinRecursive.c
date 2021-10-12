#include <stdio.h>
#include <stdlib.h>

// Recursive Function for Finding Minimum
int min_rec(int a[], int n)
{
	 if (n == 1)
        return a[0];
     int min = (a[n-1] > min_rec(a, n-1)) ? min_rec(a, n-1) : a[n-1];
     return min;
}

// Recursive Function for Finding Maximum
int max_rec(int a[], int n)
{
	if (n == 1)
        return a[0];
    int max = (a[n-1] > max_rec(a, n-1)) ? a[n-1] : max_rec(a, n-1);
    return max;
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

	int min = min_rec(arr, n);
	int max = max_rec(arr, n);

	printf("total number of elements in array: %d\n",n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("(input by user)\n");
	printf("[%d, %d]", min, max);

	return 0;
}
