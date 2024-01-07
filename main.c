#include <stdio.h>

#define PSTRING_IMPLEMENTATION
#include "Pstring.h"


int main(){

    Pstring str = pstring_new("This is not a string uwu\n");
    // pstring_new_value(&str, "Tis is new text\n");
    Pstring sub = pstring_substr(&str, 0, 4);
    printf(pstring_to_cstr(str));
    // printf("Size: %zu \n", sub.size);

    return 0;
}