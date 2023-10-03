#include <stdio.h>

int main(){
    int sum;
    int coins[3];
    int length_coins;
    char table[sum + 1];

    for(int i = 0; i < sum; i++){
        table[i] = "X";
    }

    for(int j = 0; j < length_coins; j++){
        table[coins[j]] = "B";
    }

    for(int i = 0; i < sum; i++){
        for(int j = 0; j < length_coins; j++){
            if(i - coins[j] >= 1){
                if(table[i - coins[j]] == "B"){
                    table[i] = "B";
                }
            } 
        }
    }

    if (table[sum] == "B"){
        return true;
    }else{
        return false
    }

    return 0;
}