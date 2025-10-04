#include <stdio.h>

int main(int argc, char** argv)
{
    int n, k;
    scanf("%d %d", &n, &k);
    int div = k / n;
    int mod = k % n;
    int c = (n - k % n) * (int)((k % n + n - 0.01) / n);
    printf("%d %d %d\n", div, mod, c);
    return 0;
}
