#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 32:
nyala rambut*/

int main(){
    int N, D, h, i, m=0;

    scanf("%d %d", &N, &D);
    for(i=1; i<100; i++){
        h=pow(D, i);
        if(h>N){
            m++;
        }
    }
    if(m!=0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}