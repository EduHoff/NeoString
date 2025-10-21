#include <stdio.h>
#include "portable_utils.h"

typedef struct NeoString{
    int size;
    char* string;
}NeoString;


NeoString createNeoString(const char* txt){
    NeoString s;

    int size = 0;
    while (txt[size] != '\0'){
        size++;
    }

    s.size = size;
    s.string = malloc(size * sizeof(char));

    for (int i = 0; i < size; i++) {
        s.string[i] = txt[i];
    }

    return s;
}


/*
NeoString createNeoString(int size) { //primeira ideia de como cirar um NeoString, ainda vou desenvolver mais isso
    NeoString s;
    s.size = size;
    s.string = malloc(size * sizeof(char));
    return s;
}
*/

void printNeoString(NeoString s){
    printf("%.*s", s.size, s.string);
}

NeoString scanNeoString(){ 
    NeoString s;

    scanf("%s", &s);

    return s;
}


int main(){

    Clear();

    /*
    NeoString nome = createNeoString(4);
    nome.string[0] = 's';
    nome.string[1] = 'i';
    nome.string[2] = 'm';
    nome.string[3] = '\n';
    */

    //printNeoString(nome);
    //printf("\n");



    NeoString teste1 = createNeoString("texto\n");

    printNeoString(teste1);

    NeoString teste2 = scanNeoString();
    printNeoString(teste2);

    

    /*
    NeoString teste;
    teste.size = 2;
    teste.string = 'a';
    printf("%c", teste.string);
    */


    return 0;
}
