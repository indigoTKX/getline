#include <iostream>

char* getline()
{
    char* answ = new char[100];
    char c = '\0';
    unsigned long s = 0;
    unsigned n100 = 1;
    char* temp = 0;
    while (std::cin.get(c)) {
        if (c == '\n' || c == '\0')break;
        answ[s] = c;
        s++;
        if (s > 100 * n100 - 1) {
            n100++;
            temp = new char[100 * n100];
            for (unsigned i = 0; i < s; i++)
                temp[i] = answ[i];
            delete[] answ;
            answ = 0;
            answ = temp;
        }
    }
    temp = new char[s + 1];
    for (unsigned i = 0; i < s; i++)
        temp[i] = answ[i];
    delete[] answ;
    answ = 0;
    temp[s] = '\0';
    return temp;
}