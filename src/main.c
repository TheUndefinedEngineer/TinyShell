#include <stdio.h>
#include <stdlib.h>

int main(){
    char line[1024];
    printf("TinyShell> ");
    if(fgets(line, sizeof(line), stdin) == NULL){
        printf("Invalid command");
        exit(0);
    }
    printf("%s", line);

    return 0;
}