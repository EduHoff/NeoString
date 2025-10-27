#include <stdio.h>
#include "NeoString.h"

int main(){
    printf("Por favor, digite seu nome:\n");
    NeoString s1 = scanNeoString();
    NeoString s2 = createNeoString("Hello, ");
    NeoString s3 = mergeNeoString(&s2, &s1);

    printNeoString(&s3);

    deleteNeoString(&s1);
    deleteNeoString(&s2);
    deleteNeoString(&s3);
    
    return 0;
}
