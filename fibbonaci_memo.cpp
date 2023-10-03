#include <stdio.h>


int fibbonaci_memo(int n, int memo[]){
    if(memo[n] != NULL){
        return memo[n];
    }

    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    int sum = fibbonaci_memo(n - 1, memo) + fibbonaci_memo(n - 2, memo);
    memo[n] = sum;
    
    return sum;
}