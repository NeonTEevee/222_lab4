#include <stdio.h>
#include <string.h>
int main ()
{
	int i, j = 0;
	char word[200], result[200], tempt[200];
	scanf("%s", word);
	
	result[0] = word[0];
	for(i=1; i<200; i++)
	{
		if(word[i] != result[j])
		{
			result[j+1] = word[i];
			j++;
		}
	}
	printf("%s", result);
}
