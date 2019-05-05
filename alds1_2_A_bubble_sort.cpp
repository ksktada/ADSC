#include<stdio.h>

void trace(int A[], int N) {
  int i;
  for (i = 0; i < N; i++) printf("%d ", A[i]);
  printf("\n");
}

void bubbleSort(int A[], int N){
  int j;
  int flag = 1;
  while(flag == 1){
    flag = 0;
    for (j = N - 1; j > 0; j--) {
      if (A[j] < A[j-1]) {
        int tmp = A[j];
        A[j] = A[j-1];
        A[j-1] = tmp;
        flag = 1;
      }
    }
    trace(A, N);
  }
}

void

int main(void) {
  int i, N;
  int A[100];

  scanf("%d", &N);
  for(i = 0; i < N; i++) scanf("%d", &A[i]);

  bubbleSort(A, N);

  return 0;
}
