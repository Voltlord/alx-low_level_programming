#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long int lt;
    long long int llt;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of long int: %zu bytes\n", sizeof(lt));
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of long long int: %zu bytes\n", sizeof(llt));
    return 0;
}
