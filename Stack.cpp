#include <stdio.h>
#include <string.h>
int main ()
{
	int terms, stacks;
	char input[100];
	scanf("%[^\n]", input);
	
	char *token = strtok(input, " ");
	while(token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
}
