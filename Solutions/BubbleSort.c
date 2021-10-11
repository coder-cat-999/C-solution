#include <stdio.h>
#include <stdlib.h>

// Bubble Sorting Algorithm
void bubble_sort(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n-i-1; j++)
    {
      if (a[j] > a[j+1])
      {
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
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

  printf("List before sorting:\n");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  bubble_sort(arr,n);

  printf("\nList after sorting:\n");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}