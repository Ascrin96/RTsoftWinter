#include <iostream>
#include "image.h"
#include "stdio.h"
#include "mylist.h"


void foo(Image image) {
    image.show();
}


int main() {
    Image a(3, 4);
    a.init();
//    a.show();

    Image b(2, 1);
    b.init();
//    foo(b);

    Image c(2,1);
//    c = a;
//    c.show();

//    MyList<int> myList;
//    myList.addNode((5));
//    myList.addNode((7));
//    myList.addNode((9));

//    int d0 = myList.getELement(0);
//    int d1 = myList.getELement(1);
//    int d2 = myList.getELement(2);

    MyList<Image> imageList;

    imageList.addNode(&a);
    imageList.addNode(&b);

    std::cout<< "=========="<< std::endl;
    imageList.getELement(0)->show();
    imageList.getELement(1)->show();


//    std::cout << d0 << " " << d1 << " "<< d2 << std::endl;

    int tmp = getchar();

    return 0;
}
