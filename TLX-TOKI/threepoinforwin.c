#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 90:
three points for a win*/
int main(){
    int N, i, m=0;

    scanf("%d", &N);
    int a[N], b[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++){
        scanf("%d", &b[i]);
        if(a[i]>b[i]){
            m=m+3;
        }else if(a[i]==b[i]){
            m++;
        }
    }
    printf("%d", m);
    return 0;
}