#ifndef MYMODULE_H
#define MYMODULE_H

#include <vector>
#include <string>

using namespace std;

// ������������ ���� ������
namespace MyModule {

    // ������� ��� ���������� ���������� �������
    void fillArrayRandom(vector<int>& numbers);

    // ������� ��� ���������� ����� ���������� �������� ��������� �������
    int calculateSum(const vector<int>& numbers);

    // ������� ��� ������ ���������� � ����
    void writeToOutputFile(const string& filename, int result);

    // ������� ��� ������ ������� �� �����
    void readArrayFromFile(const string& filename, vector<int>& numbers);

    // ������� ��� ������ ������� � ����
    void writeArrayToFile(const string& filename, const vector<int>& numbers);

}  

#endif  
