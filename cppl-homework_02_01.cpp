#include <iostream>
using namespace std;

struct point {
	double m_x;
	double m_y;
	point(double x, double y) {
		m_x = x;
		m_y = y;
	}
};

void print_point(const point& point_object) {
	cout << "x:" << point_object.m_x << ", y: "
		<< point_object.m_y << endl;
}

int main()
{
	int i;
	for (i = 0; i < 5; i++) {
		point my_point(i, 2 * i);
		print_point(my_point);
	}
	return 0;
}


/*
������ ���������� ������ ���������

x:0, y: 0
x:1, y: 2
x:2, y: 4
x:3, y: 6
x:4, y: 8
*/