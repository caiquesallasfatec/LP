#include <stdio.h>
#include <ctype.h>

int main()
{
	int letter = 0, letterUpper = 0, letterLower = 0, digits = 0, special = 0, len = 0, isalphabethic;
	char str[19];
	
	printf("\nDigite sua palavra: ");
	scanf("%18s", str);
	printf("\n");
	
	len = strlen(str);
	
	for (int i = 0; i < len + 1; i++) {				
		isalphabethic = isalpha(str[i]);		
		
		if (isalphabethic != 0) {
			letter += 1;
			
			if (isalphabethic == 1) {
				letterUpper += 1;
			} else {
				letterLower += 1;
			}
		} else if (isdigit(str[i]) != 0) {
			digits += 1;
		} else if (isgraph(str[i]) != 0) {
			special += 1;
		}
	}

	printf("Letras..............: \t%d\n", letter);
	printf("Letras minusculas...: \t%d\n", letterLower);
	printf("Letras Maiusculas...: \t%d\n", letterUpper);
	printf("Digitos numericos...: \t%d\n", digits);
	printf("Caracteres Especiais: \t%d\n", special);
}