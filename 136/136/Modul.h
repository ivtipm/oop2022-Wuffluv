#ifndef MYMODULE_H
#define MYMODULE_H

#include <vector>
#include <string>

using namespace std;

// ������������ ���� ��� ������ MyModule

namespace MyModule {

    // ������� ��� ���������� ����� ���������� �������� ��������� �������
    double calculateSum(const vector<double>& numbers);

    // ������� ��� ������ ���������� � ����
    void writeToOutputFile(const string& filename, double result);

} 

#endif 