#include "dot.h"
#include<math.h>

dot::dot() {
	x = 0;
	y = 0;
}

dot::dot(double x, double y) {
	this->x = x;
	this->y = y;
}

double dot::distanceTo(dot point) {
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}