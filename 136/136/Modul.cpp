#include "Modul.h"
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// ������������ ���� ������
namespace MyModule {

    // ������� ��� ���������� ���������� �������
    void fillArrayRandom(vector<int>& numbers) {
        for (int& num : numbers) {
            num = rand() % 25; // ���������� ������� �� 0 �� 25
        }
    }

    // ������� ��� ���������� ����� �������� ��������� �������
    int calculateSum(const vector<int>& numbers) {
        int sum = 0; // ����� �������� ��������� �������

        // ���������� ����� �������� �������
        for (const int& num : numbers) {
            sum += abs(num);
        }

        return sum;
    }

    // ������� ��� ������ ���������� � ����
    void writeToOutputFile(const string& filename, int result) {
        ofstream outputFile(filename);

        // �������� ��������� �������� �����
        if (!outputFile.is_open()) {
            throw runtime_error("Unable to open the output file.");
        }

        // ������ ���������� � ����
        outputFile << "Result: " << result << endl;
        outputFile.close();
    }

    // ������� ��� ������ ������� �� �����
    void readArrayFromFile(const string& filename, vector<int>& numbers) {
        ifstream inputFile(filename);

        if (!inputFile.is_open()) {
            throw runtime_error("���������� ������� ����");
        }

        numbers.clear(); // ������� ������ ����� ������� ����� ��������

        int num;
        while (inputFile >> num) {
            numbers.push_back(num);
        }

        inputFile.close();
    }

    // ������� ��� ������ ������� � ����
    void writeArrayToFile(const string& filename, const vector<int>& numbers) {
        ofstream outputFile(filename);

        if (!outputFile.is_open()) {
            throw runtime_error("���������� ������� ����");
        }

        for (const int& num : numbers) {
            outputFile << num << " ";
        }

        outputFile.close();
    }

}  
