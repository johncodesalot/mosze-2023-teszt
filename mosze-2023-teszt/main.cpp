#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //typo
    std::cout << '1-100 ertekek duplazasa' //syntax
    for (int i = 0;)                        //unfinished
    {
        b[i] = i * 2;                       //wrong init
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"               //unfinished
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;                              //wrong type, init missing
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
