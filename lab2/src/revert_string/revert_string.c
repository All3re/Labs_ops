#include "revert_string.h"

void RevertString(char *str)
{
	int k = strlen(str);
	char st;
	for (int j = 0; j < k/2; j++) {
		st = str[j];
		str[j] = str[k - j - 1];
		str[k - j - 1] = st;
	}
}

