#include <iostream>
#include "Image.h"

Image::Image(int tmy, int tmx) :mx(tmx), my(tmy)
{
	img = new int[tmx*tmy];
}

Image::Image(const Image& src) {

	img = new int[src.mx*src.my];  

	for (int i = 0; i < src.my; i++) {
		for (int j = 0; j < src.mx; j++) {
			img[mx*i + j] = src.img[mx*i + j];
		}
	}

	mx = src.mx;
	my = src.my;
}

Image::~Image()
{
	delete[]img;
}

Image& Image::operator=(const Image& src) {

	if (this != &src) {
		delete[]img;

		img = new int[src.mx*src.my];  

		for (int i = 0; i < src.my; i++) {
			for (int j = 0; j < src.mx; j++) {
				img[mx*i + j] = src.img[mx*i + j];
			}
		}

		mx = src.mx;
		my = src.my;
	
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