#define PSTRING_IMPLEMENTATION // remove when complete 
#ifndef PSTRING_H_
#define PSTRING_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>



typedef struct{
    char* string;
    size_t size;

}Pstring;


Pstring pstring_new(char* str);
Pstring pstring_substr(Pstring *str, size_t start, size_t len);
void pstring_new_value(Pstring* it, char* newstr);
const char* pstring_to_cstr(Pstring s);

#endif
#ifdef PSTRING_IMPLEMENTATION

Pstring pstring_new(char* str){
    Pstring s = {.string = str, .size = strlen(str)};
    return s;
}

Pstring pstring_substr(Pstring *str, size_t start, size_t len){
    char* news = "";
    char* startstr = str->string;
    for(size_t i = 0; i < len; i++){
        strcat(news, startstr[start]);
        start++;
    }
    return pstring_new(news);
}

const char* pstring_to_cstr(Pstring s){
    return s.string;
}

void pstring_new_value(Pstring* it, char* newstr){
    it->string = newstr;
    it->size = strlen(newstr);
}


#endif // PSTRING_IMPLEMENTATION
