#include <stdio.h>
#include <stdlib.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 59:
ngoding seru bersama master blankon*/
int main(){
    int K, i, j, m, n, h;
    int A[3];

    scanf("%d %d %d %d", &A[0], &A[1], &A[2], &K);
    
    for(i=0; i<2; i++){
        m=i;
        n=i;
        for(j=i+1; j<3; j++){
            if(K==0){
                if(A[m]<A[j]){
                    m=j;
                }
            }else if(K==1){
                if(A[n]>A[j]){
                    n=j;
                }
            }
        }
        if(K==0){
            h=A[i];
            A[i]=A[m];
            A[m]=h;
        }else if(K==1){
            h=A[i];
            A[i]=A[n];
            A[n]=h;
        }
    }
    for(i=0; i<3; i++){
        printf("%d ", A[i]);
    }
    return 0;
}