#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 29:
bilangan pecahan*/

int main(){
    int A, B, i;

    scanf("%d %d", &A, &B);
    int n=0;
    for(i=2; i<=A; i++){
        if(A%i==0 && B%i==0){
            n=i;
        }
    }
    if(n==0){
        printf("Tidak");
    }else{
        printf("%d %d", A/n, B/n);
    }
    return 0;
}