#pragma once
#include "../tringlee/geometry.h"
#include <iostream>
#ifndef _FILE_H
#define _FILE_H
using namespace std;

// ������� ����� ����� �� ������� �����
int countPoints(const char* fileName);

// ������ ����� �� �������� �����
bool readPoints(const char* fileName, Point* pointArray, int maxPointNum);

// ����� ������������� � �������� ����
bool writeTriangles(const char* fileName, const Triangle* trArray, int trNum);

// �������� �����
istream& operator>>(istream& in, Point& p);

// �������� ������
ostream& operator<<(ostream& out, const Point& p);
ostream& operator<<(ostream& out, const Triangle& tr);

#endif#pragma once
