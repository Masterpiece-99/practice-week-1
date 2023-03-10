#include "week_1.h"

void func() {
	for (int i = 0; i < 5; i++) {
		for (int j = 4 - i; j > 0; j--) {
			printf(" ");
		}

		for (int j = 0; j < i * 2 + 1; j++ ) {
			printf("*");
		}
		printf("\n");
	}
}
