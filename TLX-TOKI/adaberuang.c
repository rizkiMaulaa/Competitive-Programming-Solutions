#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 109:
ada beruang*/
int main(){
    int N, D, c=0, m=0;
    int A[100005], h[100005];
    
    scanf("%d %d", &N, &D);
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
        h[i]=A[i]+D;
        while(A[i]>h[m]){
            m++;
        }
        if(A[i]==h[m]){
            c++;
        }
    }
    printf("%d", c);
    return 0;
}