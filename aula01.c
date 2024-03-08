#include <stdio.h>
#include <stdlib.h>

char f (int X);

int main(){

    char X = f(6);
    printf("Resposta: %c.\n", X);

    return 0;
}

char f(int X) {
    if(X == 1) return('C');
    else if (X == 2) return('D');
    else if (X == 3) return('E');
    else if (X == 4) return('B');
    else if (X == 5) return('E');
}