#ifndef FILE_MAIN
#define FILE_MAIN

#include <stdio.h>

int _putchar(char x);
int _islower(int x);
int _isalpha(int x);
int _abs(int);
int _isupper(int c);
int _isdigit(int c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void _puts(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
char *_strchr(char *s, char c);

#endif
