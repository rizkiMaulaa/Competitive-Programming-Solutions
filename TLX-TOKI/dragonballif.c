#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 24:
dragonball if*/

int main(){
    int N, i, j;

    scanf("%d", &N);

    int P[N];
    for(i=0; i<N; i++){
        scanf("%d", &P[i]);
    }

    for(i=0; i<N; i++){
        printf("k");
        for(j=0; j<P[i]; j++){
            printf("a");
        }
        printf("m");
        for(j=0; j<P[i]; j++){
            printf("e");
        }
        printf("h");
        for(j=0; j<P[i]; j++){
            printf("a");
        }
        printf("m");
        for(j=0; j<P[i]; j++){
            printf("e");
        }
        printf("h");
        for(j=0; j<P[i]; j++){
            printf("a");
        }
        printf("\n");
    }
    return 0;
}