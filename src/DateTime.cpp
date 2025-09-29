#include "../include/DateTime.h"
#include <ctime>
#include <iostream>
#include <string>

DateTime DateTime::Now() {

    DateTime dt;

    time_t t = time(nullptr);
    tm* now = localtime(&t);

    dt.setDay(now->tm_mday);
    dt.setMonth(now->tm_mon + 1);
    dt.setYear(now->tm_year + 1900);

    return dt;

}

int DateTime::getDay() {
    return giorno;
}

int DateTime::getMonth() {
    return mese;
}

int DateTime::getYear() {
    return anno;
}

void DateTime::setDay(int d) {

    try {
        if (d <= 0 || d > 31) {
            throw 69;
        }

        giorno = d;
    }
    catch (int errore) {
        std::cout << "Errore" << std::endl;
    }
}

void DateTime::setMonth(int m) {
    try {
        if (m <= 0 || m > 12) {
            throw 69;
        }

        mese = m;
    }
    catch (int errore) {
        std::cout << "Errore" << std::endl;
    }
}

void DateTime::setYear(int y) {
    try {
        if (y <= 0 || y > 3000) {
            throw 69;
        }

        anno = y;
    }
    catch (int errore) {
        std::cout << "Errore" << std::endl;
    }
}

std::string DateTime::ToString()
{
    std::string g;
    std::string m;
    std::string a;

    if (giorno < 10)
    {
        g = "0" + std::to_string(giorno);
    }
    else
    {
        g = std::to_string(giorno);
    }

    if (mese < 10)
    {
        m = "0" + std::to_string(mese);
    }
    else
    {
        m = std::to_string(mese);
    }

    if (anno < 10)
    {
        a = "000" + std::to_string(anno);
    }
    else if (anno < 100)
    {
        a = "00" + std::to_string(anno);
    }
    else if (anno < 1000)
    {
        a = "0" + std::to_string(anno);
    }
    else
    {
        a = std::to_string(anno);
    }

    return g + "/" + m + "/" + a;
}
