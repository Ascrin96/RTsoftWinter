#include <iostream>
#include "image.h"

Image::Image(int tmy, int tmx) :mx(tmx), my(tmy)
{
	img = new int[tmx*tmy];
}

Image::Image(const Image& src) {
	std::cout << "Constructor copy" << std::endl;
	img = new int[src.mx*src.my];

	mx = src.mx;
	my = src.my;

	for (int i = 0; i < src.my; i++) {
		for (int j = 0; j < src.mx; j++) {
			img[mx*i + j] = src.img[src.mx*i + j];
		}
	}

}

Image::~Image()
{
	delete[]img;
}

Image& Image::operator=(const Image& src) {
	std::cout << "Operator assigned" << std::endl;
	if (this != &src) {
		delete[]img;
		
		mx = src.mx;
		my = src.my;

		img = new int[src.mx*src.my];

		for (int i = 0; i < src.my; i++) {
			for (int j = 0; j < src.mx; j++) {
				img[mx*i + j] = src.img[src.mx*i + j];
			}
		}


	}
	else {
		std::cout << "assigning to itself" << std::endl;
	}
	return *this;
}

void Image::load(char* fname)
{
}

void Image::show()
{
	for (int i = 0; i < my; i++) {
		for (int j = 0; j < mx; j++)
		{
			std::cout << get(i, j) << " ";
		}
		std::cout << std::endl;
	}
}

void Image::init()
{
	for (int i = 0; i<my; i++)
		for (int j = 0; j < mx; j++)
		{
			set(i, j, 0);
		}
}

void Image::set(int y, int x, int c)
{
	img[mx*y + x] = c;
}
int Image::get(int y, int x)
{
	return img[mx*y + x];
}