#include "htoi.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


unsigned long long htoi(const char *xeh){
    char * hex = calloc(strlen(xeh)+1, sizeof(char));
    if(xeh[0] == '0' && toupper(xeh[1]) == 'X'){
        strcpy(hex, (xeh+2));
    } else {
        strcpy(hex, xeh);
    }
    if(strlen(hex) > 16){
        fprintf(stderr, "Hex string is too long, will not fit in int64\n");
        return -1;
    } else {
        char padded[17];
        int pad = 16 - strlen(hex);
        for(int i = 0; i < pad; i++){
            padded[i] = '0';
        }
        strcpy((padded+pad), hex);
        
        long long val = strtoull(padded, NULL, 16);
        printf("%llu\n",val);
        return val;
    }
}

