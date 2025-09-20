#include <stdio.h>

int main(){
    int N, Q, i, m=1, k, h;

    scanf("%d %d", &N, &Q);
    for(i=0; i<Q; i++){
        k=(m+N)/2;
        scanf("%d", &h);
        if(h==k){
            printf("TERLALU KECIL\n");
            fflush(stdout);
            m=k+1;
        }else{
            printf("TERLALU BESAR\n");
            fflush(stdout);
            Q=k;
        }
    }
    return 0;
}