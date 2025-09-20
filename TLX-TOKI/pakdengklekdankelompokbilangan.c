#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 80:
pak dengklek dan kelompok bilangan*/
int main(){
    int N, i;

    scanf("%d", &N);
    int m[N];
    for(i=0; i<N; i++){
        scanf("%d", &m[i]);
    }
    for(i=0; i<N; i++){
        if(m[i]<0){
            printf("%d\n", m[i]);
        }
    }
    for(i=0; i<N; i++){
        if(m[i]==0){
            printf("%d\n", m[i]);
        }
    }
    for(i=0; i<N; i++){
        if(m[i]>0){
            printf("%d\n", m[i]);
        }
    }
    
    return 0;
}