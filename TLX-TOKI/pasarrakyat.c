#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 18:
pasar rakyat*/

int main(){
    int N, M=0, i, j;

    scanf("%d", &N);

    int l[N];
    for(i=0; i<N; i++){
        scanf("%d", &l[i]);
    }

    for (i=1; i<100000; i++){
        for(j=0; j<N; j++){
            if(i%l[j]==0){
                M++;
            }
        }
        if(M==N){
            printf("%d\n", i);
            break;
        }
        M=0;
    }
    return 0;
}