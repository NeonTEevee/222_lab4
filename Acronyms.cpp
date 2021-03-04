#include <stdio.h>
#include <string.h>
int main ()
{
	int i, j = 1;
	char sentence[200], acronym[200];
	scanf("%[^\n]", sentence);
	
	acronym[0] = sentence[0];
	if(acronym[0] > 90)
		acronym[0]-=32;
	for(i=1; i<strlen(sentence); i++)
	{
		if(sentence[i] == ' ')
		{
			if(sentence[i+1] == 'i' && sentence[i+2] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'o' && sentence[i+2] == 'f' && sentence[i+3] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 't' && sentence[i+2] == 'h' && sentence[i+3] == 'e' && sentence[i+4] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'o' && sentence[i+2] == 'n' && sentence[i+3] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'a' && sentence[i+2] == 't' && sentence[i+3] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'f' && sentence[i+2] == 'o' && sentence[i+3] == 'r' && sentence[i+4] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'w' && sentence[i+2] == 'i' && sentence[i+3] == 't' && sentence[i+4] == 'h' && sentence[i+5] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'a' && sentence[i+2] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'i' && sentence[i+2] == 'n' && sentence[i+3] == ' ')
			{
				i++;
			} else if (sentence[i+1] == 'a' && sentence[i+2] == 'n' && sentence[i+3] == 'd' && sentence[i+4] == ' ')
			{
				i++;
			}  else {
				i++;
				acronym[j] = sentence[i];
				if(acronym[j] > 90)
					acronym[j]-=32;
				j++;
			}
		}
	}
	
	printf("%s", acronym);
	return 0;
}
