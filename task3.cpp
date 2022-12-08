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
void OutputInfo(Address& p )
{
    std::cout << std::endl;
    std::cout << "Информация: " << std::endl;
    std::cout << "Город: " << p.city << std::endl;
    std::cout << "Улица: " << p.street << std::endl;
    std::cout << "Номер дома: " << p.house_num << std::endl;
    std::cout << "Номер квартиры: " << p.flat_num << std::endl;
    std::cout << "индекс: " << p.index << std::endl;
}

int main(int argc,char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Address address1;
    std::cin >> address1.city;
    std::cin >> address1.street;
    std::cin >> address1.house_num;
    std::cin >> address1.flat_num;
    std::cin >> address1.index;
    Address address2;
    std::cin >> address2.city;
    std::cin >> address2.street;
    std::cin >> address2.house_num;
    std::cin >> address2.flat_num;
    std::cin >> address2.index;
    OutputInfo(address1);
     OutputInfo(address2);
    return 0;
}