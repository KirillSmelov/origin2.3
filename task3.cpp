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
void OutputInfo(Address )
{
    Address city;
    std::cin >> city.city;   
    Address street;
    std::cin >> street.street;   
    Address house_num;
    std::cin >> house_num.house_num;  
    Address flat_num;
    std::cin >> flat_num.flat_num;
    Address index;
    std::cin >> index.index;
    std::cout << std::endl;
    std::cout << "Информация: " << std::endl;
    std::cout << "Город: " << city.city << std::endl;
    std::cout << "Улица: " << street.street << std::endl;
    std::cout << "Номер дома: " << house_num.house_num << std::endl;
    std::cout << "Номер кваритры: " << flat_num.flat_num << std::endl;
    std::cout << "Индекс: " << index.index << std::endl;
}

int main(int argc,char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Address A;
    OutputInfo(A);
    OutputInfo(A);
    return 0;
}