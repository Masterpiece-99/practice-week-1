#include "week_1.h"

void func() {
	int size=3513;
	size = (size+255) & ~255;
	printf("%d %d\n", size, size % 256);
}
