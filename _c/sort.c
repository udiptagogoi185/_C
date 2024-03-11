#include <stdbool.h>
#include <stdio.h>

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void bubbleSort(int arr[], int n)
{
	int i, j;
	int nn=2;
    
	for (i = 0; i < n - 1; i++) {
        printf("num %d ", i+1);
		
        int nn=1;

		for (j = 0; j < n - i - 1; j++) {

			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);

				nn=2;
			}
		}

		// If no two elements were swapped by inner loop,
		// then break
		if (nn==1){
			break;
        }
	}
}
// void bubbleSort(int arr[], int n)
// {
// 	int i, j;
// 	bool swapped;
// 	for (i = 0; i < n - 1; i++) {
//         printf("num %d ", i+1);
// 		swapped = false;
// 		for (j = 0; j < n - i - 1; j++) {
// 			if (arr[j] > arr[j + 1]) {
// 				swap(&arr[j], &arr[j + 1]);
// 				swapped = true;
// 			}
// 		}

// 		// If no two elements were swapped by inner loop,
// 		// then break
// 		if (swapped == false)
// 			break;
// 	}
// }

// Function to print an array
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

// Driver program to test above functions
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
