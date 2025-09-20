#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 110:
sesi berpikir*/
int main(){
    int N, i;

    scanf("%d", &N);
    int A[N];
    for(i=1; i<=N; i++){
        scanf("%d", &A[i]);
    }
    int c=0;
    for(i=2; i<=N; i++){
        if(A[i]!=A[i-1]){
            c++;
        }
    }
    if(N<=4 || c<=2){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}