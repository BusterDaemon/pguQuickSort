#include "sorting.h"

void swap(int* x, int* y) {
	if (*x != *y) {
		*x = *y ^ *x;
		*y = *x ^ *y;
		*x = *x ^ *y;
	}
	else {
		*x = *y;
		*y = *x;
	}
}

int partition(int arr[], int low, int high) {
	int pivot = *(arr + high);
	int i = (low - 1);

	for (int j = low; j < high; j++) {
		if (arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);			
		}
	}

	swap(&arr[i+1], &arr[high]);

	return (i + 1);
}

void sorter(int arr[], int low, int high) {
	if (low < high) {
		int pi = partition(arr, low, high);
		sorter(arr, low, pi - 1);
		sorter(arr, pi + 1, high);
	}
}