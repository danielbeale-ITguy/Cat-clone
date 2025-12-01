#include <stdio.h>


int main(){

        FILE *fptr;

        char filename[30];

        char String[100];

        printf("Please input a Filename>\t\n");

        scanf("%s",filename);

        fptr = fopen(filename, "r");

        while(fgets(String, 100, fptr)){
                printf("%s", String);
                }

}
