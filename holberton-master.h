#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* 0x02 */
void positive_or_negative(int i);
int _putchar(char);

/* 0x03 */
int largest_number(int, int, int);
int convert_day(int, int);
int print_remaining_days(int, int, int);

/* 0x04 */
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

/* 0x05 */
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);


/* 0x06 */
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

/* 0x07 */
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strchr(char *, char);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strstr(char *, char *);
void print_chessboard(char (*)[]);
void print_diagsums(int *, int);
void set_string(char **s, char *to);

/* 0x08 */
void _puts_recursion(char *);
void _print_rev_recursion(char *);
int _strlen_recursion(char *);
int factorial(int);
int _pow_recursion(int, int);
int _sqrt_recursion(int);
int is_palindrome(char *);

/* 0x09 */
int _islower(int);
char *_memset(char *, char, unsigned int);
char *_memcpy(char *, char *, unsigned int);
char *_strcat(char *, char *);
char *_strncat(char *, char *, int);
char *_strchr(char *, char);
char *_strstr(char *, char *);
int _strlen(char *);
char *_strncpy(char *, char *, int);
void _puts(char *);
int _strcmp(char *, char *);
unsigned int _strspn(char *, char *);
char *_strpbrk(char *, char *);
char *_strcpy(char *, char *);
int _abs(int);
int _atoi(char *);
int _isalpha(int);

/* 0x0A */


/* 0x0B */
char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);

/* 0x0C */
void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);

#endif /* HOLBERTON_H */
