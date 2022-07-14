#include<stdio.h>
#include<stdlib.h>
int main(){
    int i = 0, n = 0;
    int ch = 0, ct = 0;

    printf("Tossing a coin... \n");
    for(i=1;i<=3;i++){
        printf("Round %d: ", i);
        n = (1 + rand() % 2);
        if(n == 1){
            printf("Heads\n");
            ch++;
        }
        else if(n == 2){
            printf("Tails\n");
            ct++;
        }
    }
    printf("Heads: %d, Tails: %d\n", ch, ct);
    return 0;
}