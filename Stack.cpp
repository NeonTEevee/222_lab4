#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i = 0, terms, stack[100], num;
	char input[100];
	scanf("%d", &terms);
	scanf(" %[^\n]", input);
	
	char *token = strtok(input, " ");
	while(token != NULL) {
		if(token == "+")
		{
			i--;
			num = stack[i-1] + stack[i];
			stack[i] = 0;
		} else if (token == "-") {
			i--;
			num = stack[i-1] - stack[i];
			stack[i] = 0;
		} else if (token == "*") {
			i--;
			num = stack[i-1] * stack[i];
			stack[i] = 0;
		} else {
			stack[i] = atoi(token);
			printf("%d\n", stack[i]);
			i++;
		}
		token = strtok(NULL, " ");
	}
}
