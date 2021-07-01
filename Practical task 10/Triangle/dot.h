#pragma once
class dot {
public:
	dot();
	dot(double x, double y);
	double distanceTo(dot point);
private:
	double x;
	double y;
};