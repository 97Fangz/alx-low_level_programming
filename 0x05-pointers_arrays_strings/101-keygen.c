#include "main.h"
#include "stdio.h"
#include "time.h"

/**
 * main - Entry point
 * description: generates random valid passwords
 * Return: 0
 */

int main(void)
{
int psw, s;

srand(time(NULL));
s = 0;
while (s <= 2645)
{
psw = (rand() % 128);
s += psw;
printf("%c", psw);
}
printf("%c", s);

return (0);
}
