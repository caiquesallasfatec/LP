#include <stdio.h>
#include <ctype.h>

int main()
{
	char str[16];
	char strToUpper[16];
	char strToLower[16];
	char strUcFirst[16];
	char strReverse[16];
	int  len;
	
	printf("Digite sua palavra: \n");
	scanf("%15s", str);
	
	len = strlen(str);
	
	for (int i = 0; i < len + 1; i++) {
		if (i == len) {
			strToLower[i] = "\0";
			strToUpper[i] = "\0";
			strUcFirst[i] = "\0";
			strReverse[i] = "\0";
			break;
		}
		
		if (i == 0) {
			strUcFirst[i] = toupper(str[i]);
		} else {
			strUcFirst[i] = tolower(str[i]);
		}		
		
		if (str[i] > 96) {
			strReverse[i] = toupper(str[i]);			
		} else {
			strReverse[i] = tolower(str[i]);
		}
				
		strToLower[i] = tolower(str[i]);
		strToUpper[i] = toupper(str[i]);
	}
	
	// a
	printf("Palavra digitada..: \t%s\n", str);
	// b
	printf("Minusculo.........: \t%s\n", strToLower);
	// c
	printf("Maiusculo.........: \t%s\n", strToUpper);
	// d
	printf("Primeira Maiuscula: \t%s\n", strUcFirst);
	// e
	printf("Invertido.........: \t%s\n", strReverse);
	
	return 0;
}