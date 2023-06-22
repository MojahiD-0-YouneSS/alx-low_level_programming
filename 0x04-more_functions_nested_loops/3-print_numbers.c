/**
 * printNumbers - prints the numbers from 0 to 9 using _putchar
 */
void printNumbers()
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        _putchar(i + '0');
        _putchar(' ');
    }
    _putchar('\n');
}
