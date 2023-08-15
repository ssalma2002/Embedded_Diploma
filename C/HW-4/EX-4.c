#include <stdio.h>

int power(int y, int m) {
    int result;
    if (m == 0) {
        return 1;
    } else {
        result = y * power(y, m - 1);
    }
    return result;
}

int main() {
    int x, z;
    int result ;
    printf("base:   ");
    fflush(stdout);
    scanf("%d",&x);
    printf("exponent:    ");
    fflush(stdout);
    scanf("%d",&z);
    printf("result: %d\n", power(x,z));
    return 0;
}
