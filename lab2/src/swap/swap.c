#include "swap.h"

void Swap(char *left, char *right)
{
	char d = *left;
	*left = *right;
	*right = d;
}
