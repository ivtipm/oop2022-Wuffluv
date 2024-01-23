// @author Rychkov R.V.

#include "Modul.h"
#include <fstream>
#include <cmath>

using namespace std;


// ������������ ���� ������
namespace MyModule {

    
    //todo: ��������� ���������� 
    // ������� ���������� �����
    double calculateSum(const vector<double>& numbers) {
        double sum = 0.0;

        // ���������� ����� �������� �������
        for (const double& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

    //todo: ������
    //������ � 1 ���� :todo
    // ������� ������ � ���� 
    void writeToOutputFile(const string& filename, double result) {
        ofstream outputFile(filename);

        // �������� ��������� �������� �����
        if (!outputFile.is_open()) {
            throw runtime_error("Unable to open the output file.");
        }

        // ������ ���������� � ����
        outputFile << "Result: " << result << endl;
        outputFile.close();
    }

} 