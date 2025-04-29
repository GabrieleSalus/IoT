#include <stdio.h>

void main() {

    int a;
    int b;

    printf("a b | s \n");
    printf("----+---\n");

    a = 0;
    b = 0;
    printf("%d %d | %d\n", a, b, ((a || b) && (!(a && b)))); 

    a = 0;
    b = 1;
    printf("%d %d | %d\n", a, b, ((a || b) && (!(a && b)))); 

    a = 1;
    b = 0;
    printf("%d %d | %d\n", a, b, ((a || b) && (!(a && b)))); 

    a = 1;
    b = 1;
    printf("%d %d | %d\n", a, b, ((a || b) && (!(a && b)))); 

}