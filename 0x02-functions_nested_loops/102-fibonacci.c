#include <stdio.h>





int main(void)
{
	long int cur, prev, temp;
	int counter;

	prev = temp = 0;
	counter = 0;
	cur = 1;
	while (counter < 50)
	{
		temp = cur;
		cur = cur + prev;
		prev = temp;
		counter++;
		if (counter == 2 || counter == 50)
			printf("%ld\n", cur);
		else if (counter < 50)
			printf("%ld, ", cur);
	}
	return (0);
}
