#include <stdio.h>
#include <string.h>


int main(int argc, char *argv) {
    FILE f = fopen(argv[1], "r");;
    string word = calloc(20, sizeof(argv[1]));
    
    int count = 0;
    while (fscanf(f, "%s", word) != EOF)
        if (strcmp(word, argv[2]) == 0)
            count++;

    printf("Le mot %s apparais %d fois\n", argv[2], count);
}