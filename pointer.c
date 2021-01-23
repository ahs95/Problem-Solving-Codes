#include <stdio.h>
int main() {
    int num = 2049;
    void *ptr;
    ptr = &num;
    printf("Adress: %d\n", ptr);
    return 0;
}
