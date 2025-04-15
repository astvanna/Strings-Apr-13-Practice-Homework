#include <stdio.h>
int myatoi(const char *str){
	int n = 0;
	int sign = 1;
	if (*str == '-'){
		sign = -1;
		++str;
	}

	while(*str != '\0'){
		if (*str >= '0' && *str <= '9'){
			n = n * 10 + (*str - '0');
		}
		++str;
	}
	return n * sign;
}

int main(){
	char str[100];
	fgets(str, sizeof(str), stdin);
	printf("%d\n", myatoi(str));
	return 0;
}
