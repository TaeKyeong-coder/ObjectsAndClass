#include<iostream>
#include "Circle.h" //Ŭ������ ����ϴ� ���α׷�=> Ŭ���̾�Ʈ(client)
using namespace std;

int main() {
	//������
	Circle circle1;
	Circle circle2(5.0);

	cout << "The area of the circle1 of radius " << circle1.radius << " is " << circle1.getArea() << endl;
	cout << "The area of the circle2 of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	//������ ���� ���� (����)
	circle2.radius = 100;
	cout << "The area of the circle of radius " << circle2.radius << " is " << circle2.getArea() << endl;

	return 0;
}