#include <stdio.h>

int main() {
    char c;
    int i;
    float f;
    double d;

    printf("Tamanho do 'char': %zu bytes\n", sizeof(c));
    printf("Tamanho do 'int': %zu bytes\n", sizeof(i));
    printf("Tamanho do 'float': %zu bytes\n", sizeof(f));
    printf("Tamanho do 'double': %zu bytes\n", sizeof(d));

    return 0;
}
