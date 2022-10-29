#include <string>
#include <stdexcept>
using namespace std;

//����� ��������� ����������
class Engine {
private:
	string EngineCapacity;//����� ���������
	string PowerSupplySystem;//������� �������
	string Fuel;//��� �������
	unsigned Resource;//������������ ������
	string TypeOil;//��� �����
	string PowerDVS;//�������� ���
	unsigned Expenditure;//������ �������
	string ModelEngine;//������ ���������

public:
	//����������� (�������������� ����)
	Engine();
	Engine(string EC, string PSS, string F, unsigned R, string TO, string PDVS, unsigned E, string ME);
	//�������
	void setEngineCapacity(const string &EC);//������ ����� ���������
	void setPowerSupplySystem(const string &PSS);//������ ������� �������
	void setFuel(const string &F);//������ ��� �������
	unsigned setResource(unsigned R);//������ ������������ ������
	void setTypeOil(const string &TO);//������ ��� �����
	void setPowerDVS(const string &PDVS);//������ �������� ���
	unsigned setExpenditure(unsigned E);//������ ������ �������
	void setModelEngine(const string &ME);//������ ������ ���������

	//�������
	string getEngineCapacity() const;//��������� ����� ���������
	string getPowerSupplySystem() const;//��������� ������� �������
	string getFuel() const;//��������� ��� �������
	unsigned getResource() const;//��������� ������������ ������
	string getTypeOil() const;//��������� ��� �����
	string getPowerDVS() const;//��������� �������� ���
	unsigned getExpenditure() const;//��������� ������ �������
	string getModelEngine() const;//��������� ������ ���������

	//����� ������
	string to_string();
};