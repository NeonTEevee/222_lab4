#include <stdio.h>
#include <string.h>
int main ()
{
	int i, j = 1;
	char sentence[200], acronym[200];
	scanf("%s", sentence);
	
	acronym[0] = sentence[0] - 32;
	for(i=1; i<strlen(sentence); i++)
	{
		if(sentence[i] == ' ')
			acronym[j] = sentence[i+1] - 32;
	}
	
	printf("%s", acronym);
	return 0;
}
