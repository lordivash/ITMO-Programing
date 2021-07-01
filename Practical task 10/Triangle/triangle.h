#pragma once
#include"dot.h";
class triangle
{
public:
	triangle(dot, dot, dot);
	void sides();
	void perimeter();
	void square();

private:
	dot a;
	dot b;
	dot c;
};