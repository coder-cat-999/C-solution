#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_index;
 
    for (i = 0; i < n-1; i++)
    {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index])
                min_index = j;
        }
        
        swap(&arr[min_index], &arr[i]);
    }
}
 
int main()
{
    int n;
    printf("Please enter size of the Array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Please enter elements of the Array: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    
    selectionSort(arr, n);
    
    printf("Sorted array: \n");
    
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
