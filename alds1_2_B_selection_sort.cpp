#include<stdio.h>


void trace(int A[], int N) {
  int i;
  for (i = 0; i < N; i++) printf("%d ", A[i]);
  printf("\n");
}

void selectionSort(int A[], int N) {
  int i;
  for (i = 0; i < N; i++) {
    int j, minj;
    minj = i;
    for (j = i; j < N; j++) {
      if (A[j] < A[minj]) {
        minj = j;
      }
    }
    int tmp = A[i];
    A[i] = A[minj];
    A[minj] = tmp;
  }
  trace(A, N);
}


int main(void) {
  int i, N;
  int A[100];

  scanf("%d", &N);
  for(i = 0; i < N; i++) scanf("%d", &A[i]);

  selectionSort(A, N);

  return 0;
}
