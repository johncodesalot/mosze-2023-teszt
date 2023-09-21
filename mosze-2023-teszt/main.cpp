#include <iostream>

constexpr int N_ELEMENTS = 100;

int main(void)
{
    int *b = new int[N_ELEMENTS];                                      //typo fixed
    std::cout << "1-"<<N_ELEMENTS<<" ertekek duplazasa";               //syntax fixed
        for (int i = 0; i < N_ELEMENTS; i++){                          //finished   
        b[i] = (i+1) * 2;                                              //init corrected
    }

    for (int i = 0; i<N_ELEMENTS; i++){
        std::cout << "Ertek: " << b[i]<<'\n';               
    }    

    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag=0;                                                     //double, starts from 0
    for (int i = 0; i < N_ELEMENTS; i++){
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b;                                                         //Memory
    return 0;
}
