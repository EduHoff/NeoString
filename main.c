#include <stdio.h>
#include "portable_utils.h"

typedef struct NeoString{
    int size;
    char* string;
}NeoString;

NeoString createNeoString(int size) { //primeira ideia de como cirar um NeoString, ainda vou desenvolver mais isso
    NeoString s;
    s.size = size;
    s.string = malloc(size * sizeof(char));
    return s;
}


int main(){

    Clear();

    NeoString nome = createNeoString(3);
    nome.string[0] = 's';
    nome.string[1] = 'i';
    nome.string[2] = 'm';

for(int i = 0; i < nome.size; i++){
    printf("%c", nome.string[i]);
    printf("\n");
}

    /*
    NeoString teste;
    teste.size = 2;
    teste.string = 'a';
    printf("%c", teste.string);
    */


    return 0;
}
