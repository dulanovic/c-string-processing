
#ifndef STRING_PROCESSING_H
#define STRING_PROCESSING_H

size_t strlenP(const char *string);
size_t strlenA(const char string[]);

char *strcpyP(char *dest, const char *src);
char *strcpyA(char dest[], const char src[]);

char *strcatP(char *dest, const char *src);
char *strcatA(char dest[], const char src[]);

int strcmpA(const char str1[], const char str2[]);
int strcmpP(const char *str1, const char *str2);

char *strstrA(const char str1[], const char str2[]);
char *strstrP(const char *str1, const char *str2);

#endif
