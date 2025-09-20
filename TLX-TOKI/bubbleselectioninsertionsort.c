#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 40:
bubble selection-insertion sort*/

int main(){
    int N, i, j, h;

    scanf("%d", &N);
    int M[N];
    for(i=1; i<=N; i++){
        scanf("%d", &M[i]);
    }
    for(i=1; i<=(N-1); i++){
        for(j=N; j>=(i+1); j--){
            if(M[j-1]>M[j]){
                h=M[j-1];
                M[j-1]=M[j];
                M[j]=h;
            }
        }
    }
    for(i=1; i<=N; i++){
        printf("%d\n", M[i]);
    }
    return 0;
}