#include <stdio.h>
#include "NeoString.h"
#include "portable_utils.h"

int main(){
    Clear();

    NeoString teste1 = createNeoString("Hello, ");
    NeoString teste2 = createNeoString("world!\n");

    NeoString teste3 = mergeNeoString(&teste1, &teste2);

    printNeoString(&teste3);
    

    return 0;
}
