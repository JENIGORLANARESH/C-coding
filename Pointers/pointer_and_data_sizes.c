#include <string.h>
#include <stdio.h>

int main(void) {
    char a = 'A';
    short b = 2;
    int c = 4;
    float d = 5.3f;
    double e = 3.412356;

    char *pa = &a;
    short *pb = &b;
    int *pc = &c;
    float *pd = &d;
    double *pe = &e;

    printf("char *   : sizeof pointer = %zu bytes, sizeof *pa = %zu bytes\n", sizeof(pa), sizeof(*pa));
    printf("short *  : sizeof pointer = %zu bytes, sizeof *pb = %zu bytes\n", sizeof(pb), sizeof(*pb));
    printf("int *    : sizeof pointer = %zu bytes, sizeof *pc = %zu bytes\n", sizeof(pc), sizeof(*pc));
    printf("float *  : sizeof pointer = %zu bytes, sizeof *pd = %zu bytes\n", sizeof(pd), sizeof(*pd));
    printf("double * : sizeof pointer = %zu bytes, sizeof *pe = %zu bytes\n", sizeof(pe), sizeof(*pe));

    return 0;
}
