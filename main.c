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

NeoString scanNeoString(){ 
    NeoString s;
    s.size = 0;
    s.string = NULL;

    char c;

    while ((c = getchar()) != '\n' && c != EOF){
        s.string = realloc(s.string, (s.size + 1) * sizeof(char));
        s.string[s.size] = c;
        s.size++;
    }

    return s;
}

void printNeoString(NeoString s){
    printf("%.*s", s.size, s.string);
}


int main(){

    Clear();

    NeoString teste1 = createNeoString("texto\n");
    printNeoString(teste1);

    NeoString teste2 = scanNeoString();
    printNeoString(teste2);

    

    return 0;
}
