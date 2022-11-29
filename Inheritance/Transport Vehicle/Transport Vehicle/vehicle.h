/// @author ������ �.�.
/// ������������ ���� 

#include <iostream>

using namespace std;

/// ����� ������������ ��������
class Transport_Vehicle {
protected:
	string oil; /// ������� ����������
	float weight; /// ����� 
	float speed; /// ��������

public:
	/// ����������� ��� ����������
	Transport_Vehicle();

	/// ����������� � �����������
	Transport_Vehicle(string oil1, float weight1, float speed1);

	/// ����������
	~Transport_Vehicle();

	/// ����������� ����� � ���� ������
	virtual string toString();

	/// ������ �������
	void set_oil(string oil1);

	/// �������� �������
	string get_oil();

	/// ������ �����
	void set_weight(float weight1);

	/// �������� �����
	float get_weight();

	/// ������ ��������
	void set_speed(float speed1);

	/// �������� ��������
	float get_speed();
};

/// ����� �������
class Helicopter : public Transport_Vehicle {
private:
	string typeOfHelicopter; /// ��� ���������
	string purposeH; /// ���������� ���������

public:
	/// ����������� ��� ���������� 
	Helicopter();

	/// ����������� � �����������
	Helicopter(string typeOfHelicopter1, string purposeH1);

	/// ���������� 
	~Helicopter();

	/// ����������� ����� � ���� ������
	string toString() override;

	/// ������ ��� ���������
	void set_typeOfHelicopter(string typeOfHelicopter1);

	/// �������� ��� ���������
	string get_typeOfHelicopter();

	/// ������ ���������� ���������
	void set_purposeH(string purposeH1);

	/// �������� ���������� ���������
	string get_purposeH();
};

/// ����� ����������
class Auto : public Transport_Vehicle {
protected:
	string typeOfAuto; /// ��� ����������
	string purposeA; /// ���������� ����������

public:
	/// ����������� ��� ���������� 
	Auto();

	/// ����������� � �����������
	Auto(string typeOfAuto1, string purposeA1);

	/// ����������
	~Auto();

	/// ������ ��������� �� ��������� ������
	void set_parametr(string oil1, float weight1, float speed1);

	/// ����������� ����� � ���� ������
	string toString() override;

	/// ������ ��� ����������
	void set_typeOfAuto(string typeOfAuto1);

	/// �������� ��� ����������
	string get_typeOfAuto();

	/// ������ ���������� ����������
	void set_purposeA(string purposeA1);

	/// �������� ���������� ����������
	string get_purposeA1();
};