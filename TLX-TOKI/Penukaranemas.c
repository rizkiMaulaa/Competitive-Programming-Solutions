#include <stdio.h>

int tukaremas(int a){
    int tukar = (a/2)+(a/3)+(a/4);

    if(tukar>a){
        return tukaremas(a/2) + tukaremas(a/3) + tukaremas(a/4);
    }
    return a;
}
int main(){
    int n;
    scanf("%d", &n);
    int emas = tukaremas(n);
    printf("%d", emas); 
}