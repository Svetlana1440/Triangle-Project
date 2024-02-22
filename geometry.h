#pragma once
#include <iostream>
#include <cmath>
#ifndef _GEOMETRY_H
#define _GEOMETRY_H
using namespace std;
class Point {
public:
    double x, y;
    Point();
    Point(double _x, double _y);
};

class Triangle {
public:
    Point vertexes[3];
    double area;
};

// ���������� ����� ����� ������� �� �� �����������
double calcDistance(const Point& pa, const Point& pb);

// ������� ������������ �� ����������� �����
double calcTriangleArea(Triangle& tr);

// ��������������� ������� ��� ���������� �������
double calcAreaBySides(double a, double b, double c);

// ��������� �������� �������������
bool operator <=(const Triangle& tr1, const Triangle& tr2);

// ������� �������
void clearPoint(Point& p);
void clearTriangle(Triangle& tr);

#endif
