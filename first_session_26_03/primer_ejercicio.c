#include <stdio.h>
#include <stdlib.h>


int main(void) {
    printf("Size of unsigned char %lu\n", 8* sizeof(unsigned char));
    printf("Size of char %lu\n\n", 8* sizeof(C));

    printf("Size of unsigned short %lu\n", 8* sizeof(unsigned short));
    printf("Size of signed short %lu\n\n", 8* sizeof(short));

    printf("Size of unsigned int %lu\n", 8* sizeof(unsigned int));
    printf("Size of signed int %lu\n\n", 8* sizeof(int));

    printf("Size of unsigned long %lu\n", 8* sizeof(unsigned long));
    printf("Size of signed long %lu\n\n", 8* sizeof(long));

    printf("Size of float %lu\n\n", 8* sizeof(float));

    printf("Size of double %lu\n\n", 8* sizeof(double));
}