#include <iostream>
#include<string>
#include<Windows.h>

struct Address
{
    std::string city;
    std::string street;
    unsigned int house_num = 0;
    unsigned int flat_num = 0;
    unsigned int index = 0;
};
void Input(Address& p)
{
    std::cout << "Введите город: ";
    std::cin >> p.city;
    std::cout << " Введите улицу: ";
    std::cin >> p.street;
    std::cout << "Введите номер дома: ";
    std::cin >> p.house_num;
    std::cout << "Введите номер квартиры: ";
    std::cin >> p.flat_num;
    std::cout << "Введите индекс: ";
    std::cin >> p.index;
}
void OutputInfo(Address& p )
{
    std::cout << std::endl;
    std::cout << "Информация: " << std::endl;
    std::cout << "Город: " << p.city << std::endl;
    std::cout << "Улица: " << p.street << std::endl;
    std::cout << "Номер дома: " << p.house_num << std::endl;
    std::cout << "Номер квартиры: " << p.flat_num << std::endl;
    std::cout << "индекс: " << p.index << std::endl;
std:: cout << std::endl;
}

int main(int argc,char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Address address1;
    Address address2;
    Input(address1);
    OutputInfo(address1);
    Input(address2);
     OutputInfo(address2);
    return 0;
}