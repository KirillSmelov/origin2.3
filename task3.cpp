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
void OutputInfo(Address* city,Address* street,Address* house_num,Address* flat_num,Address* index)
{
    std::cout << "Город: ";
    std::cin >> city->city;  
    std::cout << "Улица: ";
    std::cin >> street->street;
    std::cout << "Номер дома: ";
    std::cin >> house_num->house_num;   
    std::cout << "Номер квартиры: ";
    std::cin >> flat_num->flat_num;   
    std::cout << "Индекс: ";
    std::cin >> index->index;
    std::cout << std::endl;
}

int main(int argc,char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Address city;
    Address street;
    Address house_num;
    Address flat_num;
    Address index;
    OutputInfo(&city, &street, &house_num, &flat_num, &index);
    OutputInfo(&city, &street, &house_num, &flat_num, &index);
    return 0;
}