#include <stdio.h>
#include <stdlib.h>

int calculo(int p, int q){
    p = p * 10;
    q = q + 10;
    return (p + q);
}
int main (){
    int x = 2, y = 5;
    printf("(%d * %d) + (%d + %d) = %d", x, 10, y, 10, calculo(x,y));
return 0;
}
