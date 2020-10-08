#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 * @level: is the level of the Menger Sponge to draw
*/

void menger(int level)
{
	int op, index, index2, row, col, numeral;

	op = pow(3, level);
	for (index = 0; index < op; index++)
	{
		for (index2 = 0; index2 < op; index2++)
		{
			row = index;
			col = index2;
			numeral = '#';

			while (row || col)
			{
				if (row % 3 == 1 && col % 3 == 1)
				{
					numeral = ' ';
				}
				row /= 3;
				col /= 3;
			}
			putchar(numeral);
		}
		putchar('\n');
	}
}
