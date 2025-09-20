#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 34:
perkalian pak dengklek*/
int main(){
    int A, B, n[10], m[10], k=0, l=0, i, j;

    scanf("%d %d", &A, &B);
    int h=0;
    while(A>0){
        n[k]=A%10;
        A=A/10;
        k++;
    }
    while(B>0){
        m[l]=B%10;
        B=B/10;
        l++;
    }
    for(i=0; i<k; i++){
        for(j=0; j<l; j++){
            h=h+(n[i]*m[j]);
        }
    }
    printf("%d", h);
    return 0;
}