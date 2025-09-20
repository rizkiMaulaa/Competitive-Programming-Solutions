#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 15:
bunga gabungan*/
int main(){
    int P, Q, h;

    scanf("%d %d", &P, &Q);
    h=(P*P)+(Q*Q)+1;
    if(h%4==0){
        printf("%d", h/4);
    }else{
        printf("-1");
    }
}