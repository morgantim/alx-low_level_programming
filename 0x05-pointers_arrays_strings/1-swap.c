/**
 * swap_int - this function swaps values
 *
 * @a: value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
