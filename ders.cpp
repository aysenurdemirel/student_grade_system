#include "ders.h"

Ders::Ders(std::string dersIsmi)
{
    ders_ismi = dersIsmi;
}

std::string Ders::getDersIsmi()
{
    return ders_ismi;
}

void Ders::ogrenciEkle(int ogrenci_numarasi, std::string ogrenci_adi, int ogrenci_notu){
    ogrenci o;
    o.ogrenci_numarasi = ogrenci_numarasi;
    o.ogrenci_adi = ogrenci_adi;
    o.ogrenci_notu = ogrenci_notu;

    ogrenci_listesi.insert({ogrenci_numarasi,o});
}

/*void ders::rastgeleNotlar(){
    for(auto it = ogrenci_listesi.begin(); it!= ogrenci_listesi.end(); it++){
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        srand (time(NULL));
        it->second.ogrenci_notu = rand() % 101;
    }
}*/

void Ders::setGecmeNotu(int gecmeNotu){
    gecme_notu = gecmeNotu;
}

int Ders::getGecmeNotu()
{
    return gecme_notu;
}

 std::vector<std::string> Ders::gecenliste(){
    std::vector<std::string> gecenler;

    for (auto it = ogrenci_listesi.begin(); it!= ogrenci_listesi.end(); it++){
        if(gecme_notu <= it->second.ogrenci_notu){
             gecenler.push_back(it->second.ogrenci_adi);
        }
    }
    return gecenler;
}

std::map<int, int> Ders::notnolist(){
    std::map<int, int> notno;
    for(auto it = ogrenci_listesi.begin(); it!= ogrenci_listesi.end(); it++){
        notno.insert({it->first,it->second.ogrenci_notu});
    }
    return notno;
}
