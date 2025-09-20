#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 14:
Line search*/

int main(){
    int N, D, n, m=0, i;

    scanf("%d %d", &N, &D);
    for(i=0; i<N; i++){
        scanf("%d", &n);
        if(n==D){
            printf("%d", i);
            m=1;
            break;
        }
    }
    if(m==0){
        printf("-1");
    }
    return 0;
}