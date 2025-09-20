#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 86:
kisah katak dalam sumur*/
int main(){
    int N, H, i, ma=0, mb=1000000, x;

    scanf("%d %d", &N, &H);
    int J[N];
    for(i=0; i<N; i++){
        scanf("%d", &J[i]);
        if(J[i]>ma){
            ma=J[i];
        }
    }
    for(i=0; i<N; i++){
        if(J[i]<mb && ma+J[i]>=H){
            mb=J[i];
        }
    }
    x=ma+mb;
    printf("%d", x);
    return 0;
}