/// @author Rychkov R.V.
/// ���������� ������ �����������

#include <string>
#include <stdexcept>

using namespace std;

/// ����� �����������
class Triangle {
private:
	int kat1; /// ����� 1
	int kat2; /// ����� 2
	int kat3; /// ����� 3

public:
	/// ����������� (�������������� ����)
	Triangle();
	Triangle(int k1, int k2, int k3, int h, float S);

	/// �������
	void setKatet1(const int& k1); /// ������ 1-� �����
	void setKatet2(const int& k2); /// ������ 2-� �����
	void setKatet3(const int& k3); /// ������ 3-� �����

	/// �������
	int getKatet1() const; /// �������� 1-� �����
	int getKatet2() const; /// �������� 2-� �����
	int getKatet3() const; /// �������� 3-� �����

	/// ����� ������
	string to_string();
};