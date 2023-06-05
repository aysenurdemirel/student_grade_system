#include "okul.h"
#include "ders.h"

struct dersadi{
    std::string ders_ismi;
    int ders_kodu;
};

Okul::Okul(std::string okulAdi)
{
    okul_adi = okulAdi;
}

void Okul::dersEkle(std::string isim, Ders *ders){
    ders_listesi.insert({isim, ders});
}

Ders* Okul::getDers(std::string ders_adi){
    return ders_listesi[ders_adi];
}

std::vector <std::string> Okul::dersler(){
    std::vector <std::string> derslist;
    for(auto& i: ders_listesi){
        derslist.push_back(i.second->getDersIsmi());
    }
    return derslist;
}


