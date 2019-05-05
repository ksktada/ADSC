#include<iostream>
using namespace std;

void insertionSort(int A[],int  n, int g){
  for(int i = g < n, i++){
    int v = A[i];
    int j = i - g;
    while(j >= 0 && A[j] > v){
      A[j+g] = A[j];
      j = j - g;
      cnt++;
    }
    A[j+g] = v;
  }
}

void shellSort(int A[], int n){
  int cnt = 0;
  int m = 0;
  int G[1000000];

  for(int i = 0; i < m; i++){
    insertionSort(A, n, G[i]);
  }
}

int main(void){
  int N;
  int A[1000000];

  cin >> N;
  for(int i = 0; i < N; i++) cin >> A[i];

  shellSort(A, N);

  printf("\n");
  for(int i = 0; i < N; i++){
    printf("%d ", A[i]);
  }

  return 0;
}
