#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 83:
tukar kartu*/
int main(){
    int N, i, j, h, m=0;
    
    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++){
        for(j=0; j<N-1; j++){
            if(a[j]>a[j+1]){
                h=a[j];
                a[j]=a[j+1];
                a[j+1]=h;
                m++;
            }
        }
    }
    printf("%d", m);
    return 0;
}