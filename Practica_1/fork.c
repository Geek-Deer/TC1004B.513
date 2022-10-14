#include <stdio.h>

int main(){
    printf("Probando\n");
    int pId = fork();

    if(pId == 0) printf("Soy el proceso hijo\n");
    else printf("Soy el proceso padre\n");

    return 0;
}