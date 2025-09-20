#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 105:
hadiah 1*/
int main(){
    int N, M, i; 
    long c, h=0;

    scanf("%d %d", &N, &M);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<M; i++){
        h+=a[i];
    }
    c=h;
    if(M<=N){
        for(i=M; i<N; i++){
            h+=a[i]-a[i-M];
            if(h>c){
                c=h;
            }
        }    
    }
    printf("%ld", c);
    return 0;
}