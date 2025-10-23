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

NeoString mergeNeoString(NeoString* s1, NeoString* s2){
    NeoString s3;
    s3.size = s1->size + s2->size;
    s3.string = malloc(s3.size * sizeof(char));

    for(int i=0; i<s1->size; i++){
        s3.string[i] = s1->string[i];
    }

    for(int i=0; i<s2->size; i++){
        s3.string[i + s1->size] = s2->string[i];
    }

    return s3;
}

void deleteNeoString(NeoString* s){
    if(s->string != 0){
        free(s->string);
        s->string = NULL;
        s->size = 0;
    }
}

void printNeoString(NeoString* s){
    if(s->string != 0){
        printf("%.*s", s->size, s->string);
    }
}


int main(){
    Clear();

    NeoString teste1 = createNeoString("Hello, ");
    NeoString teste2 = createNeoString("world!\n");

    NeoString teste3 = mergeNeoString(&teste1, &teste2);

    printNeoString(&teste3);
    

    return 0;
}
