#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 20:
tarif taksi*/

int main(){
    int T, i, A, B, L, h;
    
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d %d %d", &A, &B, &L);
        if(L<=2000){
            h=A;
        }else{
            h=A+(((L-2000)/100)*B);
        }
        printf("%d\n", h);
    }
    return 0;
}