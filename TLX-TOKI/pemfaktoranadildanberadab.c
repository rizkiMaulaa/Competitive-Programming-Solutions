#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 37:
pemfaktoran adil dan beradab*/
int main(){
    int N, i, f=2;

    scanf("%d", &N);
    for(i=2; i<N; i++){
        if(N%i==0){
            f++;
        }
    }
    if(f==5){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}