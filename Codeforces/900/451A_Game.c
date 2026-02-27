#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n,&m);

    int moves = (n < m) ? n : m;

    if (moves % 2 == 1)
        printf("Akshat");
    else
        printf("Malvika");

    return 0;
}
