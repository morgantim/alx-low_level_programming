#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/*this function prints alphabet*/
void print_alphabet(void);
/*this function print alphabet in ten lines*/
void print_alphabet_x10(void);

/*this function identifies if a letter is lowercase or not*/
int _islower(int c);

/*this function identifies if the character is alpha or not*/
int _isalpha(int c);

/*this funtion prints the sign of a number*/
int print_sign(int n);

/*this fuctio coputes the absolute value of an integer*/
int _abs(int num);

/*REMINDER, DOESNT WORK*/
int print_last_digit(int);
/*{
	int lastDigit;
	lastDigit = num % 10;
	_putchar(lastDigit);
	return(0);
}*/

/*this function prints every minute of the day of Jack Bauer*/
void jack_bauer(void);

/*this function prints a nine time table*/
void times_table(void);

/*this function add two integers*/
int add(int, int);

/*this function prints all natural numbers from n to 98*/
void print_to_98(int n);
