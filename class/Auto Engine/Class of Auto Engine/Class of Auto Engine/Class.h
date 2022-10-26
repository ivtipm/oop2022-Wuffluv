#include <string>
#include <stdexcept>
using namespace std;

//����� ��������� ����������
class Engine {
private:
	std :: string EngineCapacity;//����� ���������
	std :: string PowerSupplySystem;//������� �������
	std :: string Fuel;//��� �������
	unsigned Resource;//������������ ������
	std :: string TypeOil;//��� �����
	std :: string PowerDVS;//�������� ���
	unsigned Expenditure;//������ �������
	std :: string ModelEngine;//������ ���������

public:
	//����������� (�������������� ����)
	// Engine();
	Engine(std::string EC, std::string PSS, std::string F, unsigned R, std::string TO, std::string PDVS, unsigned E, std::string ME);
	//�������
	void setEngineCapacity(const std :: string &EC);//������ ����� ���������
	void setPowerSupplySystem(const std :: string &PSS);//������ ������� �������
	void setFuel(const std :: string &F);//������ ��� �������
	unsigned setResource(unsigned R);//������ ������������ ������
	void setTypeOil(const std :: string &TO);//������ ��� �����
	void setPowerDVS(const std :: string &PDVS);//������ �������� ���
	unsigned setExpenditure(unsigned E);//������ ������ �������
	void setModelEngine(const std :: string &ME);//������ ������ ���������

	//�������
	const std :: string getEngineCapacity();//��������� ����� ���������
	const std :: string getPowerSupplySystem();//��������� ������� �������
	const std :: string getFuel();//��������� ��� �������
	const unsigned getResource();//��������� ������������ ������
	const std :: string getTypeOil();//��������� ��� �����
	const std :: string getPowerDVS();//��������� �������� ���
	const unsigned getExpenditure();//��������� ������ �������
	const std :: string getModelEngine();//��������� ������ ���������

	
};