#include <stdio.h>
#include <stdlib.h>


int main(){
    int n, i, x=0, y;

    scanf("%d", &n);getchar();
    for(i=0; i<n; i++){
        scanf("%d", &y);
        x=0;
        while(y>0){
            x=x*10+y%10;
            y=y/10;
        }
        printf("%d\n", x);
    }
    return 0;
}