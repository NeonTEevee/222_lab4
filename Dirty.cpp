#include <stdio.h>
#include <string.h>
int main ()
{
	int i;
	char word[200], result[200], tempt[200];
	scanf("%s", word);
	printf("Input: %s\n", word);
	
	result[0] = word[0];
	for(i=1; i<200; i++)
	{
		if(word[i] != result[i-1])
		{
			
		}
	}
	printf("%s", result);
}
