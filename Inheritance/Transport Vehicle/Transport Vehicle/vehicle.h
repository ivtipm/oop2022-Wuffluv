/// @author ������ �.�.
/// ������������ ���� 

#include <iostream>

using namespace std;

/// ����� ������������ ��������
class Transport_Vehicle {
protected:
	string oil; /// ������� ����������
	string typeOfVehicle; /// ��� ����������
	string purpose; /// ���������� ����������
	float weight; /// ����� 
	float MaxSpeed; /// ������������ ��������
	

public:
	/// ����������� ��� ����������
	Transport_Vehicle();

	/// ����������� � �����������
	Transport_Vehicle(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// ����������
	~Transport_Vehicle();

	/// ����������� ����� � ���� ������
	virtual string toString();

	/// ������ ��� ����������
	void set_typeOfVehicle(string typeOfVehicle1);

	/// �������� ��� ����������
	string get_typeOfVehicle();

	/// ������ ���������� ����������
	void set_purpose(string purpose1);

	/// �������� ���������� ����������
	string get_purpose();

	/// ������ �������
	void set_oil(string oil1);

	/// �������� �������
	string get_oil();

	/// ������ �����
	void set_weight(float weight1);

	/// �������� �����
	float get_weight();

	/// ������ ��������
	void set_speed(float MaxSpeed1);

	/// �������� ��������
	float get_speed();
};

/// ����� �������
class Helicopter : public Transport_Vehicle {
private:
	float maxHigh; /// ������������ ������� ������

public:
	/// ����������� ��� ���������� 
	Helicopter();

	/// ����������� � �����������
	Helicopter(float maxHigh1);

	/// ���������� 
	~Helicopter();

	/// ������ ��������� �� ��������� ������
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// ����������� ����� � ���� ������
	string toString() override;

	/// ������ ������������ ������� ������
	void set_maxHigh(float maxHigh1);

	/// �������� ������������ ������� ������
	float get_maxHigh();
};

/// ����� ����������
class Auto : public Transport_Vehicle {
protected:
	float door; /// ���������� ������

public:
	/// ����������� ��� ���������� 
	Auto();

	/// ����������� � �����������
	Auto(float door1);

	/// ����������
	~Auto();

	/// ������ ��������� �� ��������� ������
	void set_parametr(string oil1, string typeOfVehicle1, string purpose1, float weight1, float MaxSpeed1);

	/// ����������� ����� � ���� ������
	string toString() override;

	/// ������ ���������� ������
	void set_door(float door1);

	/// �������� ���������� ������
	float get_door();
};