#include <iostream>
#include "image.h"
#include "stdio.h"
#include "list.h"


void foo(Image image) {
	image.show();
}


int main()
{
	Image a(3, 4);
	a.init();
	a.show();

	Image b(2, 1);
	b.init();
	foo(b);
	
	Image c(2,1);
	c = a;
	c.show();

	List<int> list;
	list.addNode(5);

	int d = list.getELement(0);

	std::cout << d << std::endl;
	
	int tmp = getchar();

	return 0;
}