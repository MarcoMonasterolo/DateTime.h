#ifndef DATETIME_LIBRARY_H
#define DATETIME_LIBRARY_H

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

    int setDay(int d);
    int setMonth(int m);
    int setYear(int y);

};

#endif //DATETIME_LIBRARY_H