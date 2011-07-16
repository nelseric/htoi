#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "htoi.h"

int main(int argc, char **argv){
    char *buf;
    rl_bind_key('\t',rl_abort);
    while((buf = readline("H: ")) != NULL){
        if(strcmp(buf, "quit") == 0)
            break;
        htoi(buf);
        if(buf[0] != 0)
            add_history(buf);
    }
    free(buf);

    return EXIT_SUCCESS;
}
