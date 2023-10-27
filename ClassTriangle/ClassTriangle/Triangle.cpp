/// @author Rychkov R.V.
/// ���������� ������ "�����������"

#include "Triangle.h"

using namespace std;

Triangle::Triangle() {
	kat1 = 0; /// ����� 1
	kat2 = 0; /// ����� 2
	kat3 = 0; /// ����� 3
}

/// ������ 1-� �����
void Triangle::setKatet1(const int& k1) {
	if (k1 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat1 = k1;
}

/// �������� 1-� �����
int Triangle::getKatet1() const {
	return kat1;
}

/// ������ 2-� �����
void Triangle::setKatet2(const int& k2) {
	if (k2 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat2 = k2;
}

/// �������� 2-� �����
int Triangle::getKatet2() const {
	return kat2;
}

/// ������ 3-� �����
void Triangle::setKatet3(const int& k3) {
	if (k3 <= 0)
		throw invalid_argument("Error: Katet is wrong");
	else
		kat3 = k3;
}

/// �������� 3-� �����
int Triangle::getKatet3() const {
	return kat3;
}

/// ��������� ���� ������ �� ������
string Triangle::to_string() {
	return "Katet 1: " + std::to_string(kat1) +
		"\nKatet 2: " + std::to_string(kat2) +
		"\nKatet 3: " + std::to_string(kat3);
		
}