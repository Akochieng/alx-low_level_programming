/**
  *swap_int - function that swaps the values of two arguments
  *@a: pointer of the first interget
  *@b: pointer of the second interger
  *Description: function that takes in two pointers to intergers and swaps the
  *values of the intergers
  *Return: void
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
