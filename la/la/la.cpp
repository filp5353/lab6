#include <iostream>
#include <cmath>

using namespace std;

struct pkt
{
	double x, y;
};

struct pro
{
	double x;
	double y;
};

struct okr
{
	double x;
	double y;
	double r;
	//void pole(double x, double y, double r);
};


void odl(double x1, double y1, double x2, double y2)
{
	int po = pow((x2 - x1),2) + pow((y2 - y1),2);
	cout << sqrt(po);
}

void ppro(double x1, double y1, double x2, double y2)
{
	int tmp = x2 - x1;
	int tmp2 = y2 - y1;
	cout << tmp * tmp2;
}

void kolo(double x1, double y1, double x2, double y2)
{
	int tmp = x2 - x1;
	int tmp2 = y2 - y1;
	cout << tmp * tmp2;
}

int main()
{
	pro p1;
	pro p2;
	p1.x = 3;
	p1.y = 2;
	p2.x = 7;
	p2.y = 8;
	ppro(p1.x, p1.y, p2.x,p2.y);
}