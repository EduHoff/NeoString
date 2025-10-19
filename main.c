#include <stdio.h>
#include "portable_utils.h"

typedef struct NeoString{
    int size;
    char* string;
}NeoString;


int main(){

    Clear();
    printf("teste\n");

    NeoString teste;

    teste.size = 2;
    teste.string = 'a';

    printf("%c", teste.string);



    return 0;
}
