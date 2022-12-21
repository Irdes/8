#include <iostream>
#include <bitset>

int main()
{
    long long number;
    std::cin >> number;
    int size = sizeof(number);
    unsigned char* address = (unsigned char*)&number; //конвертируем в char*, чтобы при итерации шагать по 1 байту 
    for (unsigned char* i = address + size - 1; i >= address; i--) //цикл с конца к началу дл€ удобства, в пам€ти с наименьшего байта к большему
        std::cout << std::bitset<8>(*i) << " "; //в bitset дл€ побитового отображени€
}

//ѕример ввода: -1000
//ѕример вывода: 11111111 11111111 11111111 11111111 11111111 11111111 11111100 00011000
//»нвертировано и -1 т.к. отрицательное число, до этого было двоичное 11 11100111 = 99.
