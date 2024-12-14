// Read an integer variable and print it.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* address = calloc(1, sizeof(int));
    scanf("%d", address);
    printf("%d", *address);
    return 0;
}