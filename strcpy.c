#include <stdio.h>

char *mystrcpy(char *dest, const char *src) {
	char *ptr = dest;
	while (*src != '\0') {
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return dest;
}

int main() {
	char src[] = "hello";
	char dest[100];
	printf("%s\n", mystrcpy(dest, src));
	return 0;
}
