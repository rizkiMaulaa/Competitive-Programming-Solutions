#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 108:
festival mercon*/
int main(){
    int N;
    long h=0;

    scanf("%d", &N);
    int A[N], B[N];

    for(int i=1; i<=N; i++){
        scanf("%d", &A[i]);
    }
    for(int i=1; i<=N; i++){
        scanf("%d", &B[i]);
    }
    for(int i=1; i<=N; i++){
        h=h+A[i];
    }
    if(h%2==0){
        printf("0");
    }else{
        printf("1");
    }
    return 0;
}