#include <stdio.h>

void swap_endian(int *x) {
    unsigned char *ptr = (unsigned char *)x;
    unsigned char temp;
    temp = ptr[0];
    ptr[0] = ptr[3];
    ptr[3] = temp;
    temp = ptr[1];
    ptr[1] = ptr[2];
    ptr[2] = temp;
}

int main() {
    int x = 0x12345678;
    printf("%x\n", x); 
    swap_endian(&x); 
    printf("%x\n", x);
    return 0;
}
