#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
unsigned int binary_to_uint(constant char *b);
void print_binary(unsign long int n);
int get_bit(unsign long int n, unsign int index);
int set_bit(unsigned long int *n, unsign  int index);
int clear_bit(unsign long int *n, unsign int index);
unsigned int flip_bits(unsign long int n, unsign long int m);
int get_endianness(void);

#endif /* MAIN_H */
