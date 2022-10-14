#include<stdio.h>
int main() {
    int intType;
    float floatType;
    long int lt;
    long long int llt;
    char charType;

    printf("Size of a int: %zu bytes\n", sizeof(intType));
    printf("Size of a float: %zu bytes\n", sizeof(floatType));
    printf("Size of a long int: %zu bytes\n", sizeof(lt));
    printf("Size of a char: %zu byte\n", sizeof(charType));
    printf("Size of a long long int: %zu bytes\n", sizeof(llt));
    return 0;
}
