#ifndef DATETIME_LIBRARY_H
#define DATETIME_LIBRARY_H

#include <string>

class DateTime {
private:
    int giorno;
    int mese;
    int anno;

public:
    static DateTime Now();
    DateTime() {
        giorno = 1;
        mese = 1;
        anno = 1;
    };

    DateTime (int G,int M, int A) {
        giorno = G;
        mese = M;
        anno = A;
    }
    int getDay();
    int getMonth();
    int getYear();

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);

    std::string ToString();

};

#endif //DATETIME_LIBRARY_H