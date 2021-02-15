#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s1 = 0, s2 = 0;
	char glasn[] = { "aeiouy" };
	char boo = 0;
	printf("Vvedite stroku:");
	char str1[1000];
	fgets(str1, sizeof(str1), stdin);
	printf("Vvedite dlinu:");
	int d;
	scanf("%d", &d);
	if (d == 0) {
		printf("Error!");
		return 0;
	}
	for (int i = 0; i < 1000; i++) {
		if ((str1[i + 1] == ' ') || (str1[i + 1] == '\n')) {
			for (int j = 0; j < 6; j++) {
				if (str1[i] == glasn[j]) boo = 1; 
			}			
			if ((boo == 1) && (s1+1 == d)) {
				s2++; s1 = 0, i++; boo = 0;
			}
			else { i++; s1 = 0; boo = 0; }
		}
		else  s1++; boo = 0;
	}
		printf("Result: %d", s2);
		return 0;
}