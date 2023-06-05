#ifndef DERS_H
#define DERS_H

#include <iostream>
#include <fstream>
#include <thread>
#include <cstdlib>
#include <map>
#include <vector>
#include <string>
#include "json.hpp"

struct ogrenci{
    std::string ogrenci_adi;
    int ogrenci_numarasi;
    int ogrenci_notu;
};

class Ders
{
private:
    std::map<int, ogrenci>ogrenci_listesi;
    std::string ders_ismi = "";
    int gecme_notu = 0;

public:
    Ders (std::string dersIsmi);
    std::string getDersIsmi();

    void ogrenciEkle(int ogrenci_numarasi, std::string ogrenci_adi, int ogrenci_notu);
    void setGecmeNotu(int gecmeNotu);
    int getGecmeNotu();

    std::vector<std::string> gecenliste();
    std::map<int, int> notnolist();
};

#endif // DERS_H
