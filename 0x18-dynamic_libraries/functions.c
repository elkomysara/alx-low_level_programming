#include "main.h"
#include <stdio.h>

/* You can create simple implementations of the functions or placeholders */
int _putchar(char c) { return putchar(c); }
int _islower(int c) { return (c >= 'a' && c <= 'z'); }
int _isalpha(int c) { return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')); }
int _abs(int n) { return (n < 0) ? -n : n; }
int _isupper(int c) { return (c >= 'A' && c <= 'Z'); }
int _isdigit(int c) { return (c >= '0' && c <= '9'); }
int _strlen(char *s) { int len = 0; while (*s++) len++; return len; }
void _puts(char *s) { while (*s) _putchar(*s++); _putchar('\n'); }
char *_strcpy(char *dest, char *src) { char *r = dest; while ((*dest++ = *src++)); return r; }
int _atoi(char *s) { int sign = 1, num = 0; while (*s == ' ') s++; if (*s == '-' || *s == '+') sign = (*s++ == '-') ? -1 : 1; while (*s >= '0' && *s <= '9') num = num * 10 + (*s++ - '0'); return num * sign; }
char *_strcat(char *dest, char *src) { char *r = dest; while (*dest) dest++; while ((*dest++ = *src++)); return r; }
char *_strncat(char *dest, char *src, int n) { char *r = dest; while (*dest) dest++; while (n-- && (*dest++ = *src++)); if (n == 0) *dest = '\0'; return r; }
char *_strncpy(char *dest, char *src, int n) { char *r = dest; while (n-- && (*dest++ = *src++)); while (n-- > 0) *dest++ = '\0'; return r; }
int _strcmp(char *s1, char *s2) { while (*s1 && *s1 == *s2) { s1++; s2++; } return *(unsigned char *)s1 - *(unsigned char *)s2; }
char *_memset(char *s, char b, unsigned int n) { char *r = s; while (n--) *s++ = b; return r; }
char *_memcpy(char *dest, char *src, unsigned int n) { char *r = dest; while (n--) *dest++ = *src++; return r; }
char *_strchr(char *s, char c) { while (*s != c && *s != '\0') s++; return (*s == c) ? s : NULL; }
unsigned int _strspn(char *s, char *accept) { unsigned int count = 0; char *p; while (*s) { for (p = accept; *p; p++) if (*s == *p) break; if (!*p) break; count++; s++; } return count; }
char *_strpbrk(char *s, char *accept) { while (*s) { char *p = accept; while (*p) if (*s == *p++) return s; s++; } return NULL; }
char *_strstr(char *haystack, char *needle) { char *h, *n; while (*haystack) { h = haystack; n = needle; while (*n && *h == *n) { h++; n++; } if (!*n) return haystack; haystack++; } return NULL; }
