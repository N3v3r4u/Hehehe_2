#include <iostream>
#include <iomanip>
#include <bitset>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "���, �����, ���, ����������� 1.2, ��������� �.�., ������������ ������ �5" << std::endl;//������ ������� �����
    std::cout << "������������� ������ � ����������" << std::endl;//����������� ��������� �������

    unsigned int X, Y;
    std::cout << "������� ����� ��������������� ����� X:" << std::endl;
    std::cin >> X;
    std::cout << "������� ����� ��������������� ����� Y:" << std::endl;
    std::cin >> Y;
    unsigned int RES = X + Y;

    std::cout << "X � �������� �������:" << std::bitset<16>(X) << std::endl;
    std::cout << "X � ���������� �������" << std::dec << X << std::endl;
    std::cout << "X � ������������ �������: " << std::oct << X << std::endl;
    std::cout << "X � ����������������� �������: " << std::hex << X << std::endl;

    std::cout << "Y � �������� �������:" << std::bitset<16>(Y) << std::endl;
    std::cout << "Y � ���������� �������" << std::dec << Y << std::endl;
    std::cout << "Y � ������������ �������: " << std::oct << Y << std::endl;
    std::cout << "Y � ����������������� �������: " << std::hex << Y << std::endl;

    std::cout << "RES � �������� �������:" << std::bitset<16>(RES) << std::endl;
    std::cout << "RES � ���������� �������" << std::dec << RES << std::endl;
    std::cout << "RES � ������������ �������: " << std::oct << RES << std::endl;
    std::cout << "RES � ����������������� �������: " << std::hex << RES << std::endl;

}