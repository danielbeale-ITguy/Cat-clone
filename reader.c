#include <stdio.h>


int main(){

        FILE *fptr;

        fptr = fopen("tt.txt", "r");

        char String[1000];
                
        while(fgets(String, 1000, fptr)){
                printf("%s", String);
                }

                
}
