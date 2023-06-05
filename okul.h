#ifndef OKUL_H
#define OKUL_H

#include <iostream>
#include "ders.h"

class Okul
{
private:
    std::map <std::string, Ders*> ders_listesi;
    std::string okul_adi = "";
    std::string ders_ismi = "";

public:
    Okul(std::string okulAdi);
    std::string getOkulAdi();

    void dersEkle(std::string isim, Ders* ders);
    Ders* getDers(std::string ders_adi);
    std::vector <std::string> dersler();
};

#endif // OKUL_H

