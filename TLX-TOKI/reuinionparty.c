#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 89:
reunion party*/
int main(){
    int N, i, H;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &H);
        int m=1;
        while(H>0){
            H=H-m;
            m++;
        }
        printf("%d\n", m);
    }
    return 0;
}