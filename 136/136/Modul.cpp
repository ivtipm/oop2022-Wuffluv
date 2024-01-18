#include "Modul.h"
#include <fstream>
#include <cmath>

using namespace std;

// ���������� ������� �� ������������� �����

namespace MyModule {

    double calculateSum(const vector<double>& numbers) {
        double sum = 0.0;

        // ���������� ����� ���������� �������� ��������� �������
        for (const double& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

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

} // namespace MyModule
