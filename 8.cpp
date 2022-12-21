#include <iostream>
#include <bitset>

int main()
{
    long long number;
    std::cin >> number;
    int size = sizeof(number);
    unsigned char* address = (unsigned char*)&number; //������������ � char*, ����� ��� �������� ������ �� 1 ����� 
    for (unsigned char* i = address + size - 1; i >= address; i--) //���� � ����� � ������ ��� ��������, � ������ � ����������� ����� � ��������
        std::cout << std::bitset<8>(*i) << " "; //� bitset ��� ���������� �����������
}

//������ �����: -1000
//������ ������: 11111111 11111111 11111111 11111111 11111111 11111111 11111100 00011000
//������������� � -1 �.�. ������������� �����, �� ����� ���� �������� 11 11100111 = 99.
