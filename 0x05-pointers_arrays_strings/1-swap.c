/**
 * swap_int - swaps the values of two integers
 * @a: first pointer to type int
 * @b: second pointer to type int
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
