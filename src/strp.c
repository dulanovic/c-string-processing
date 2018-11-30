
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

size_t strlenP(const char *string) {
    size_t length = 0;
    while (*(string) != '\0') {
        length++;
        string++;
    }
    return length;
}

char *strcpyP(char *dest, const char *src) {
    int steps = 0;
    for (int i = 0; ; i++) {
        *dest = *src;
        dest++;
        src++;
        steps++;
        if (*src == '\0') {
            *dest = '\0';
            dest -= steps;
            src -= steps;
            break;
        }
    }
    return dest;
}

char *strcatP(char *dest, const char *src) {
    char *s1 = dest;
    for (; ; s1++) {
        if (*s1 == '\0') {
            break;
        }
    }
    char *s2 = src;
    for (; ; s1++, s2++) {
        if (*s2 == '\0') {
            break;
        }
        *s1 = *s2;
    }
    *s1 = '\0';

    return dest;
}

int strcmpP(const char *str1, const char *str2) {
    while (1) {
        if (*str1 == '\0' && *str2 == '\0') {
            break;
        }
        if (*str1 > *str2 || (*str2 == '\0' && *str1 != '\0')) {
            return 1;
        }
        if (*str2 > *str1 || (*str1 == '\0' && *str2 != '\0')) {
            return -1;
        }
        str1++;
        str2++;
    }
    return 0;
}

char *strstrP(const char *str1, const char *str2) {
    char *ptr;
    char *s1 = str1;
    for (; ; s1++) {
        if (*s1 == '\0') {
            return NULL;
        }
        if (*s1 == *str2) {
            ptr = s1;
            char *s2 = str2;
            for (; ; s1++, s2++) {
                if (*s2 == '\0') {
                    return ptr;
                }
                if (*s1 == '\0' && *s2 != '\0') {
                    return NULL;
                }
                if (*s1 != *s2) {
                    break;
                }
            }
        }
    }
}
