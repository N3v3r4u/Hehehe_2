#include <iostream>
#include <iomanip>
#include <bitset>

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "ТПУ, ИШИТР, ОИТ, Информатика 1.2, Димитриев Д.А., лабораторная работа №5" << std::endl;//Задаем русский текст
    std::cout << "Представление данных в компьютере" << std::endl;//настраиваем кодировку консоли

    unsigned int X, Y;
    std::cout << "Введите целое неотрицательное число X:" << std::endl;
    std::cin >> X;
    std::cout << "Введите целое неотрицательное число Y:" << std::endl;
    std::cin >> Y;
    unsigned int RES = X + Y;

    std::cout << "X в двоичной системе:" << std::bitset<16>(X) << std::endl;
    std::cout << "X в десятичной системе" << std::dec << X << std::endl;
    std::cout << "X в восьмеричной системе: " << std::oct << X << std::endl;
    std::cout << "X в шестнадцатеричной системе: " << std::hex << X << std::endl;

    std::cout << "Y в двоичной системе:" << std::bitset<16>(Y) << std::endl;
    std::cout << "Y в десятичной системе" << std::dec << Y << std::endl;
    std::cout << "Y в восьмеричной системе: " << std::oct << Y << std::endl;
    std::cout << "Y в шестнадцатеричной системе: " << std::hex << Y << std::endl;

    std::cout << "RES в двоичной системе:" << std::bitset<16>(RES) << std::endl;
    std::cout << "RES в десятичной системе" << std::dec << RES << std::endl;
    std::cout << "RES в восьмеричной системе: " << std::oct << RES << std::endl;
    std::cout << "RES в шестнадцатеричной системе: " << std::hex << RES << std::endl;

}