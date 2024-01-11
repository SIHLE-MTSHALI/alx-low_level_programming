#include <stdio.h>
#include <string.h>

int generate_key(const char *username) {
    int length = strlen(username);
    int key = ((length ^ 59) & 63) + 32;
    for (int i = 0; i < length; i++) {
        if (username[i] % 2 == 0) {
            key += 1;
        }
    }
    key = ((key ^ 0x4f) & 63) + 32;
    return key;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: ./keygen5 username\n");
        return 1;
    }
    int key = generate_key(argv[1]);
    printf("%d\n", key);
    return 0;
}

