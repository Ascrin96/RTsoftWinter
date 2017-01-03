#include "Image.h"
#include "stdio.h"

int main() {

	Image a(3, 4);
	a.init();
	a.show();

	int tmp = getchar();

	return 0;
}