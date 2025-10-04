#include <stdio.h>
 
int main(int argc, char** argv) {
    long long A;
    scanf("%lld", &A);
    printf("%lld\n", (A / 10) * (A / 10 + 1) * 100 + 25);
    return 0;
}
