#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int var=1;

void holaMundo(int signalNumber){
    if(signalNumber ==10){
        printf("Es la senal 10\n");
    }
    else printf("Es otra senal\n");
}

void adios(int sig){
    var=0;
}

int main(){
    signal(12,holaMundo);
    while(var){
        
        printf("Estoy trabajando\n");
        sleep(1);
        signal(2,adios);
    }
    printf("Nunca llega\n");
    return 0;
}