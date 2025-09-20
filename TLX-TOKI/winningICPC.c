#include <stdio.h>

int main(){
    int N, M, i, j, h, a, b=0, k[100], l[100];

    scanf("%d %d", &N, &M);
    for(i=1; i<=N; i++){
        scanf("%d", k[i]);
    }
    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            scanf("%d", &a);
            if(a==k[i]){
                l[i]++;
            }
        }
        if(b<l[i]){
            h=i;
            b=l[i];
        }
    }
    if(N==1){
        printf("1");
    }else if(b==0){
        printf("1");
    }else{
        printf("%d", h);
    }
    return 0;
}