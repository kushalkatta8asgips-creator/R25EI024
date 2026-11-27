#include <stdio.h>

void greet(const char *name) {
    printf("Hello, %s! Welcome to our project.\n", name);
}

int main(void) {
    greet("Kushal");
    return 0;
}