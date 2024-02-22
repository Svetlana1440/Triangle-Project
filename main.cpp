#include <iostream>
#include <locale.h>
#include "../tringlee/geometry.h"
#include "../tringlee/search.h"
#include "../tringlee/file.h"


using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    char* inFileName = new char[256];
    char* outFileName = new char[256];

    cout << "������� ��� �������� �����: ";
    cin.getline(inFileName, 256);
    cout << "������� ��� ��������� �����: ";
    cin.getline(outFileName, 256);

    cout << "������ ����" << endl;

    int pointNum = countPoints(inFileName);
    if (pointNum < 0) {
        cout << "������� ���� �� ����������" << endl;
        return -2;
    }
    else if (pointNum < 4) {
        cout << "������� ���� ������� ���" << endl;
        return -3;
    }

    Point* pointArray = new Point[pointNum];

    if (!readPoints(inFileName, pointArray, pointNum)) {
        cout << "������ ��� ����� �����" << endl;
        return -3;
    }

    const int maxTrNum = 3;
    Triangle trArray[maxTrNum];

    searchLargestTriangles(pointArray, pointNum, trArray, maxTrNum);
    if (!writeTriangles(outFileName, trArray, maxTrNum)) {
        cout << "�� ���������� �������� ���������" << endl;
        return -4;
    }

    cout << "��������� ������� ���������" << endl;
    delete[] pointArray;
    delete[] inFileName;
    delete[] outFileName;
    return 0;
}
