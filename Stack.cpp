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
		if(strcmp(token, "+") == 0)
		{
			i--;
			num = stack[i-1] + stack[i];
			printf("Operation Plus Num = %d\n", num);
			stack[i] = 0;
		} else if (strcmp(token, "-") == 0) {
			i--;
			num = stack[i-1] - stack[i];
			printf("Operation Minus Num = %d\n", num);
			stack[i] = 0;
		} else if (strcmp(token, "*") == 0) {
			i--;
			num = stack[i-1] * stack[i];
			printf("Operation Times Num = %d\n", num);
			stack[i] = 0;
		} else {
			stack[i] = atoi(token);
			printf("%d\n", stack[i]);
			i++;
		}
		token = strtok(NULL, " ");
	}
	printf("%d", num);
	return 0;
}
