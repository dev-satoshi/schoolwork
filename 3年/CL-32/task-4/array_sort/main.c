#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort.h"

#define N 20
#define MAX 100

int main() {
  int arr[N];
  srand(time(NULL));
  for (int i = 0; i < N; i++)
      arr[i] = rand() % MAX;

  printf("Before sort:\n");
  print_array(arr, N);

  clock_t start = clock();
  quick_sort(arr, 0, N - 1);
  clock_t end = clock();

  printf("After sort:\n");
  print_array(arr, N);
  printf("Time: %.4f sec\n", (double)(end - start) / CLOCKS_PER_SEC);

  return 0;
}
