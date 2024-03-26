#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <numero>\n", argv[0]);
        return 1;
    }

    int primo = 0;
    int numero = atoi(argv[1]);

    if (numero <= 1) {
        printf("false\n");
        return 0;
    }

    for (int i = 2; i <= numero / 2 + 1; i++) {
        if (numero % i == 0) {
            primo = 1;
            break;
        }
    }

    if (primo == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
