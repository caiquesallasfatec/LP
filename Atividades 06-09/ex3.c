#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[20], str_next[20];
	int len_str, len_str_next;
	
	printf("\nDigite uma palvra: ");
	scanf("%20s", str);
	
	printf("\nDigite outra palvra: ");
	scanf("%20s", str_next);
	
	len_str = strlen(str);
	len_str_next = strlen(str_next);
	
	if (len_str == len_str_next) {			
		if (strcmp(str, str_next) == 0) {
			printf("Strings são idênticas: case sensitive");
			return 0;
		}
	
		for (int i = 0; i < len_str; i++)
		{			
			if (tolower(str[i]) != tolower(str_next[i])) {
				break;
			}
			
			printf("Strings são idênticas: case insensitive");
			return 0;						
		}
	}
	
	printf("Strings são diferentes");
	return 0;
}