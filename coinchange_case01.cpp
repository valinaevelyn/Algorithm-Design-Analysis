#include <stdio.h>

int main(){
    int w;
    int coins[3];
    int length_coins;

    int table[length_coins + 1][w + 1];

    for(int i = 0; i < length_coins; i++){
        for(int j = 0; j < w; j++){
            table[i][j] = 0;
        }
    }

    for(int i = 0; i < length_coins; i++){
        for(int j = 0; j < w; j++){
            if(j % coins[0] == 0){
                table[i][j] = 1;
            }

            if(coins[i] > j){
                table[i][j] = table[i - 1][j];
            }else{
                table[i][j] = table[i-1][j] + table[i][j - coins[i]];
            }
        }
    }

    return 0;
}