#include "main.h"
/**
 * _isalpha - check alphabet character
 * @c: character to be checked
 * Return: 1 if c is character, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
