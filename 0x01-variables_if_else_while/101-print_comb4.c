nclude <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Description: Prints all possible different combinations of three digits.
 *     * Numbers must be separated by ,, followed by a space.
 *      * The three digits must be different.
 *       * Print only the smallest combination of three digits.
 *        * Numbers should be printed in ascending order, with three digits.
 *         * You can only use the putchar function.
 *          *
 *           * Return: Always 0 (Success)
 *            */
int main(void)
{
		int i, j, k;

			i = 0;
				while (i <= 7)
						{
									j = i + 1;
											while (j <= 8)
														{
																		k = j + 1;
																					while (k <= 9)
																									{
																														putchar(i + '0'); /* Print the first digit */
																																		putchar(j + '0'); /* Print the second digit */
																																						putchar(k + '0'); /* Print the third digit */

																																										if (!(i == 7 && j == 8 && k == 9))
																																															{
																																																					putchar(',');  /* Print a comma */
																																																										putchar(' ');  /* Print a space */
																																																														}
																																														k++;
																																																	}
																								j++;
									
															}
i++;
}
putchar('\n');
return (0);
}

