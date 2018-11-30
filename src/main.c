
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"

int main(int argc, char *argv[]) {

    char *str1;
    char *str2;
    char *search;
    char *temp;
    size_t length = 50;
    int i;
    str1 = (char *) calloc(length, sizeof(*str1));
    str2 = (char *) calloc(length, sizeof(*str2));
    strcpyP(str1, "xlksf98se7fsdflwe9");
    strcpyP(str2, "ksf98se-7");
    // strcpyP(str1, "Vidan trenutno zna samo Javu.");
    // strcpyP(str2, " A voleo bi da nauci i programski jezik C.");
    // temp = str1;
    printf("s1 ---> %s (%u)\n", str1, str1);
    /* for (i = 0; i < length; i++) {
        printf("VALUE ---> %c (%u)\n", *(str1 + i), (str1 + i));
    }
    printf("\n\n"); */
    printf("s2 ---> %s (%u)\n", str2, str2);
    /* for (i = 0; i < length; i++) {
        printf("VALUE ---> %c (%u)\n", *(str2 + i), (str2 + i));
    } */

    search = strstr(str1, str2);
    if (search == NULL) {
        printf("\nString \"%s\" not found in string \"%s\"\n", str2, str1);
        return(EXIT_FAILURE);
    }
    temp = str1;
    printf("\n\n\n");
    printf("search ---> %c (%u)\n", *search, search);
    for (; ; temp++) {
        printf("%c", *temp);
        if (temp == search) {
            printf("\b[");
            break;
        }
    }
    int str2Length = (int) strlenP(str2);
    for (i = 0; i < str2Length; i++, temp++) {
        printf("%c", *temp);
    }
    printf("]");
    for (; ; temp++) {
        if (*temp == '\0') {
            break;
        }
        printf("%c", *temp);
    }

    return(EXIT_SUCCESS);
}