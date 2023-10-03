#include <stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    }

    return b;
}

int main(){
    int w, coins[3], length_coins;
    int table[length_coins][w];

    for(int i = 0; i < length_coins; i++){
        for(int j = 0; j < w; j++){
            table[i][j] = 0;
        }
    }

    for(int i = 0; i < length_coins; i++){
        for(int j = 0; j < w; j++){
            if(j == 0){
                return 0;
            }

            if (j % coins[0] == 0){
                table[0][j] = j / coins[0];
            }

            if(coins[i] > j){
                table[i][j] = table[i - 1][j];
            }else{
                table[i][j] = min(table[i - 1][j], 1 + table[i][j - coins[i]]);
            }
        }
    }

}