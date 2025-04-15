#include <stdio.h>
unsigned int strlcpy(char *dst, const char *src, unsigned int size) {
	unsigned int i = 0;
	
	if (size > 0) {
		for (; i < size - 1 && src[i] != '\0'; ++i) {
			dst[i] = src[i];
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0') {
		++i;
	}
	return i;
}

int main() {
	char src[] = "hello";
	char dst[4];

	unsigned int len = strlcpy(dst, src, sizeof(dst));

	printf("%s\n", dst);
	printf("Source length: %u\n", len);

	return 0;
}
