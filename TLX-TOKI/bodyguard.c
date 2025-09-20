#include <stdio.h>

int main(){
    int N, P[100], i, j, h, m, s;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", P[i]);
    }
    for(i=0; i<N; i++){
        for(j=0; j<i; j++){
            h=P[i]-P[j];
            if(h<m){
                m=h;
            }
        }
    }
    s=1;
    while(m!=0){
        s=s*m;
        m--;
    }
    printf("%d", s);
    return 0;
}