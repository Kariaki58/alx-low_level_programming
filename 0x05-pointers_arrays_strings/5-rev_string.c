#include "main.h"
#include <string.h>
/**
 * rev_string - the function that reverse the string s
 * @arr: the input to be revered.
 */
void rev_string(char arr[])
{
	int i, j;

	i = 0;
	j = strlen(arr) - 1;
	while (i < j)
	{
		char tem;

		tem = arr[i];
		arr[i] = arr[j];
		arr[j] = tem;
		i++;
		j--;
	}
}
