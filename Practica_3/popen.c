#include <stdio.h>

int main(){
    FILE *sort;
    char *strl[10];
    strl[0] = "Hola";
    strl[1] = "Otra";
    strl[2] = "Ya";
    strl[3] = "Fin";
    sort = popen("sort","w");

    for (int i=0 ; i<4 ; i++) fprintf(sort, "%s\n",strl[i]);

    pclose(sort);

    return 0;
}