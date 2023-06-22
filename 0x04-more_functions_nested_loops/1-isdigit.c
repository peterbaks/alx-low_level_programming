#include "main.h"

/**
 * isdigit - write a functionm that checks for a digit (0 through 9).
 * @c: char to checj
 * *return:0 or !
 * */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else 
		return (0);
}
