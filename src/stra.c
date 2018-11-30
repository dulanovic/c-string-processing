
#include <stddef.h>

size_t strlenA(const char string[]) {
    size_t length = 0;
    for (int i = 0; ; i++) {
        if (string[i] == '\0') {
            break;
        }
        length++;
    }
    return length;
}

char *strcpyA(char dest[], const char src[]) {
    for (int i = 0; ; i++) {
        if (src[i] == '\0') {
            dest[i] = '\0';
            break;
        }
        dest[i] = src[i];
    }
    return dest;
}

char *strcatA(char dest[], const char src[]) {
    int destLength = (int) strlenA(dest);
    int srcLength = (int) strlenA(src);
    int totalLength = destLength + srcLength;
    int i;
    for (i = destLength; i < totalLength; i++) {
        dest[i] = src[i - destLength];
    }
    dest[i] = '\0';

    return dest;
}

int strcmpA(const char str1[], const char str2[]) {
    for (int i = 0; ; i++) {
        if (str1[i] == '\0' && str2[i] == '\0') {
            break;
        }
        if (str1[i] > str2[i] || (str2[i] == '\0' && str1[i] != '\0')) {
            return 1;
        }
        if (str2[i] > str1[i] || (str1[i] == '\0' && str2[i] != '\0')) {
            return -1;
        }
    }
    return 0;
}

char *strstrA(const char str1[], const char str2[]) {
    char *ptr;
    int length = (int) strlenA(str2);
    for (int i = 0; ; i++) {
        if (str1[i] == '\0') {
            return NULL;
        }
        if (str1[i] == str2[0]) {
            ptr = &str1[i];
            i++;
            int j;
            for (j = 1; j < length; j++, i++) {
                if (str1[i] == '\0') {
                    return NULL;
                }
                if (str1[i] != str2[j]) {
                    break;
                }
            }
            if (j == length) {
                return ptr;
            }
        }
    }
}
