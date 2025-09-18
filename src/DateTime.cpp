#include "DateTIme.h"
#include <ctime>
#include <iostream>

static DateTime Now() {

    DateTime dt;

    time_t t = time(nullptr);
    tm* now = localtime(&t);

    dt.setDay(now->tm_mday);
    dt.setMonth(now->tm_mon + 1);
    dt.setYear(now->tm_year + 1900);

    return dt;

};

int DateTime::getDay() {
    return giorno;
}

int DateTime::getMonth() {
    return mese;
}

int DateTime::getYear() {
    return anno;
}

int DateTime::setDay(int d) {

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

int DateTime::setMonth(int m) {
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

int DateTime::setYear(int y) {
    try {
        if (y <= 0 || y > 2000) {
            throw 69;
        }

        anno = y;
    }
    catch (int errore) {
        std::cout << "Errore" << std::endl;
    }
}