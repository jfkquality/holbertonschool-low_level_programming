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
void print_number2(int, int, int, int);

char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strncpy(char *, char *, int);
int _strcmp(char *, char *);
void reverse_array(int *, int);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *, char *, char *, int);
#endif /* HOLBERTON_H */
