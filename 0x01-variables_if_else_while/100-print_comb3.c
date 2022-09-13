#include <stdio.h>
#include <unistd.h>
/**
 * main - Entyr point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;

<<<<<<< HEAD
	int c, i;
=======
>>>>>>> 76de967da524bb7c798467a05d6d0c39c1215916
	for (c = '0'; c <= '9'; c++)
	{	
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
<<<<<<< HEAD
				       	putchar(',');
				       	putchar(' ');
=======
					putchar(',');
					putchar(' ');
>>>>>>> 76de967da524bb7c798467a05d6d0c39c1215916
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
