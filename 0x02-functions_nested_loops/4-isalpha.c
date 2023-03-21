#include "main.h"

/**
 * main
 * _isalpha - check for aphabets
 *
 * character to check the all the alphabets
 * Return:0 or 1
 */

int _isalpha(int c)
{
	return ( (c >= 97 && c <= 122)||(c >= 65 && c <= 90) );
}
