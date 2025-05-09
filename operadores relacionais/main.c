#include <stdio.h>
#include <stdlib.h>

void imprime(int n) {
    if(n%2 == 0) {
        printf ("\n%d it's even!", n);
    }else{
        printf ("\n%d it's odd!", n);
        }

}

int main(){
    int n;
    printf ("\n Informa o valor de n: ");
    scanf("%d", &n);
    imprime(n);
    return 0;
}
