#include <iostream>
#include <fstream>

using namespace std;

bool NTCheck(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ifstream inputFile("input.txt");
    if (!inputFile.is_open()) {
        cout << "Khong the mo file input.txt" << endl;
        return 1;
    }

    int N;
    inputFile >> N;

    inputFile.close();

    cout << "Nhap so nguyen N: ";
    cin >> N;

    ofstream outputFile("output.txt");
    if (!outputFile.is_open()) {
        cout << "Khong the mo file output.txt" << endl;
        return 1;
    }
    outputFile << "Cac so nguyen to nho hon " << N << " la:" << endl;
    for (int i = 2; i < N; ++i) {
        if (NTCheck(i)) {
            outputFile << i << " ";
        }
    }

    outputFile.close();

    cout << "Da ghi ket qua vao file output.txt" << endl;

    return 0;
}
