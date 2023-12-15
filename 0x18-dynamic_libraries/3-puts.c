#include "main.h"
void _puts(char *str);
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
    _putchar('\n');
}
