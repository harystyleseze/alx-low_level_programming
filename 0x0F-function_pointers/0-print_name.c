#include "function_pointers.h"

/**
 *print_name - print name
 *@name: name to print
 *@f: pointer to the function
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
