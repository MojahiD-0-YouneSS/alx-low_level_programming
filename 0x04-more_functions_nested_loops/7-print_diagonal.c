#include <stdio.h>

void print_diagonal(int n) {
    int a, b;
    
    if (n > 0) {
        for (a = 1; a <= n; a++) {
            for (b = 1; b < a; b++) {
                putchar(' ');
            }
            putchar('\\');
            putchar('\n');
        }
    } else {
        putchar('\n');
    }
}

