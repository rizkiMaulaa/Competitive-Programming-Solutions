#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 101:
snack*/
int main(){
    int b, i, N, K;

    scanf("%d", &b);
    int h[b];
    for(i=0; i<b; i++){
        scanf("%d %d", &N, &K);
        if(N%(K+1)==0){
            h[i]=1;
        }else{
            h[i]=0;
        }
    }
    for(i=0; i<b; i++){
        if(h[i]==1){
            printf("Kasus #%d: ya\n", i+1);
        }else{
            printf("Kasus #%d: tidak\n", i+1);
        }
    }
    return 0;
}