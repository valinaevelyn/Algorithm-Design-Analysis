#include <stdio.h>

int fibbonaci(int n){
    int A[n + 1];
    A[0] = 0; 
    A[1] = 1;

    for(int i = 0; i < n; i++){
        A[i] = A[i - 1] + A[i - 2];
    }

    return A[n - 1];
}