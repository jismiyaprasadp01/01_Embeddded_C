/*
Exercise 20: Simulate Memory Fragmentation
Goal: Understand fragmentation with sequential malloc and free.

Activity:
 
Allocate multiple memory blocks of varying sizes.
Free some in between.
Allocate a new block that fits only in fragmented space.
Observe behavior.
Free all at the end.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *block1 = malloc(256 * 1024);
    void *block2 = malloc(512 * 1024);
    void *block3 = malloc(128 * 1024);
    void *block4 = malloc(256 * 1024);

    printf("Allocated 4 blocks.\n");

    free(block2);
    free(block4);

    printf("Freed block2 and block4.\n");

    void *block5 = malloc(512 * 1024);

    if (block5 != NULL) {
        printf("Allocated block5 (512KB) in fragmented space.\n");
    } 
    else {
        printf("Failed to allocate block5 in fragmented space.\n");
    }

    free(block1);
    free(block3);
    free(block5);

    printf("Freed all blocks.\n");

    return 0;
}

