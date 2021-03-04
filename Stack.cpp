#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	int i = 0, j, terms, stack[100], num;
	char input[100];
	scanf("%d", &terms);
	scanf(" %[^\n]", input);
	
	char *token = strtok(input, " ");
	for(j=0; j<terms; j++) {
		if(strcmp(token, "+") == 0)
		{
			i--;
			num = stack[i-1] + stack[i];
			printf("Operation Plus = %d + %d = %d\n", stack[i-1], stack[i], num);
			stack[i] = 0;
		} else if (strcmp(token, "-") == 0) {
			i--;
			num = stack[i-1] - stack[i];
			printf("Operation Minus = %d - %d = %d\n", stack[i-1], stack[i], num);;
			stack[i] = 0;
		} else if (strcmp(token, "*") == 0) {
			i--;
			num = stack[i-1] * stack[i];
			printf("Operation Multiplication = %d * %d = %d\n", stack[i-1], stack[i], num);
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
