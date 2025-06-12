#include <stdio.h>
#include "sort.h"

void quick_sort(int arr[], int left, int right) {
  if (left >= right) return;

  int pivot = arr[(left + right) / 2];
  int i = left, j = right;

  while (i <= j) {
    while (arr[i] < pivot) i++;
    while (arr[j] > pivot) j--;
    if (i <= j) {
      int tmp = arr[i];
      arr[i++] = arr[j];
      arr[j--] = tmp;
    }
  }

  quick_sort(arr, left, j);
  quick_sort(arr, i, right);
}

void print_array(int arr[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
