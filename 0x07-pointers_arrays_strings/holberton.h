#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

void positive_or_negative(int i);
int _putchar(char);
int _isupper(int);
int _isdigit(int);
int mul(int, int);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int);
void print_diagonal(int);
void print_square(int);
void print_triangle(int);
void print_number(int n);
int digits(int);
void print_number2(int, int, int);

char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*)[]);
void print_diagsums(int *, int);
void set_string(char **s, char *to);
#endif /* HOLBERTON_H */
