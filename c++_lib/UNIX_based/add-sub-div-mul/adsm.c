// add.c
#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int div(int a, int b) {
    if (b == 0) {
        printf("\n \tDivision by zero is not allowed. Zero will be returned...\n");
        printf("\t It is recommended to use another number instead of %d\n", b);
        return 0;
    }
    else{
        return a / b;
    }
}
int sub(int a, int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
