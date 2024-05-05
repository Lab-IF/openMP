#include <stdio.h>
#include <omp.h>

int main() {
  int n = 100; // Jumlah elemen array
  int arr[n]; // Array bilangan
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  int sum = 0;
  #pragma omp parallel for reduction(+:sum)
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  printf("Penjumlahan: %d\n", sum);

  return 0;
}