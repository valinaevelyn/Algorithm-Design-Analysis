#include <stdio.h>

int max(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    int w = 10;
    int length = 7;
    int profits[7] = {5, 2, 3, 6, 4, 3, 2};
    int weight[7] = {36, 16, 21, 57, 28, 24, 13};

    // Create a table with dimensions (length+1) x (w+1) to account for 0-based indexing.
    int table[length + 1][w + 1];

    for(int i = 0; i <= length; i++){
        for(int j = 0; j <= w; j++){
            if(i == 0 || j == 0){
                table[i][j] = 0;
            }
            else if(weight[i - 1] > j){
                table[i][j] = table[i - 1][j];
            }
            else{
                table[i][j] = max(table[i-1][j], profits[i - 1] + table[i-1][j - weight[i - 1]]);
            }
        }
    }

    printf("%d\n", table[length][w]);
    return 0;  // Added return 0 to indicate successful execution.
}
