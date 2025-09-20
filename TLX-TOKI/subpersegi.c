#include <stdio.h>

int main(){
    int n, h=0, m=0, i;

    scanf("%d", &n);

    for(i=0; i<=n; i++){
        m=i*i;
        h=m+h;
    }
    printf("%d", h);
    return 0;
}