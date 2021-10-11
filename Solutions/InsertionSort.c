// C Program to sort an array using insertion sort
#include<stdio.h>
#include<malloc.h>

void insertion_sort(int* array, int n) {
    int t, j;

    for(int i = 1; i < n; i++) {
        j = i - 1;
        t = array[i];

        while(j >= 0 && t <= array[j]) {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = t;
    }
}

int main() {
    int n, *array;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    array = (int *) malloc(n * sizeof(int));
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) 
        scanf("%d", &array[i]);
    
    insertion_sort(array, n);

    printf("\nThe sorted array is:\n");
    for(int i = 0; i < n; i++) 
        printf("%d ", array[i]);
    
    free(array);
    return 0;
}