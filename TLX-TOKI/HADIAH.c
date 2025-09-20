#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 87:
hadiah*/
long int h(long int a, long int b, long int N){
    long int m=1;
    while(b>0){
        if(b%2!=0){
            m=(m*a)%N;
        }
        a=(a*a)%N;
        b=b/2;
    }
    return m;
}
int main(){
    int A, B, C, N, i;
    scanf("%d %d %d %d", &A, &B, &C, &N);
    for(i=0; i<C; i++){
        A=h(A, B, N);
    }
    printf("%d", A+1);
    return 0;
}