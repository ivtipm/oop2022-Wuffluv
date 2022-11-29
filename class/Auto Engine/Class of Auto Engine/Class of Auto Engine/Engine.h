/// @author Rychkov R.V
/// ���������� ������ "��������� ����������"

#include <string>
#include <stdexcept>
using namespace std;

/// ����� ��������� ����������
class Engine {
private:
	string EngineCapacity;			/// ����� ���������
	string PowerSupplySystem;       /// ������� �������
	string Fuel;					/// ��� �������
	float Resource;//������������ ������
	string TypeOil;//��� �����
	string PowerDVS;//�������� ���
	float Expenditure;//������ �������
	string ModelEngine;//������ ���������

public:
	//����������� (�������������� ����)
	Engine();
	Engine(string EC, string PSS, string F, float R, string TO, string PDVS, float E, string ME);
	//�������
	void setEngineCapacity(const string &EC);//������ ����� ���������
	void setPowerSupplySystem(const string &PSS);//������ ������� �������
	void setFuel(const string &F);//������ ��� �������
	float setResource(unsigned R);//������ ������������ ������
	void setTypeOil(const string &TO);//������ ��� �����
	void setPowerDVS(const string &PDVS);//������ �������� ���
	float setExpenditure(unsigned E);//������ ������ �������
	void setModelEngine(const string &ME);//������ ������ ���������

	//�������
	string getEngineCapacity() const;//��������� ����� ���������
	string getPowerSupplySystem() const;//��������� ������� �������
	string getFuel() const;//��������� ��� �������
	float getResource() const;//��������� ������������ ������
	string getTypeOil() const;//��������� ��� �����
	string getPowerDVS() const;//��������� �������� ���
	float getExpenditure() const;//��������� ������ �������
	string getModelEngine() const;//��������� ������ ���������

	//����� ������
	string to_string();
};