#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 91:
Tzaph dan tipe barisan*/
int main(){
    int N, i, m=0, n=0, o=0;

    scanf("%d", &N);
    int A[N];

    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(i=1; i<N; i++){
        if(A[i]==A[i-1]){
            m++;
            n++;
            o++;
        }else if(A[i]<A[i-1]){
            n++;
        }else if(A[i]>A[i-1]){
            o++;
        }
    }
   if(m==N-1){
        printf("EQUAL");
    }else if(n==N-1){
        printf("NONINCREASING");
    }else if(o==N-1){
        printf("NONDECREASING");
    }else{
        printf("NONE");
    }
    return 0;
}