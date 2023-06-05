#include "okul.h"
#include "ders.h"


int main()
{
    Ders* fizik = new Ders("fizik");
    Ders* matematik = new Ders("matematik");

	std::string aa_json = "aa.json";
	std::ifstream f(aa_json);
	nlohmann::json data = nlohmann::json::parse(f);

    for(auto& element: data["ogrenciler"]){
        fizik->ogrenciEkle(element["numara"], element["isim"], element["not"]);
     }

    Okul gazi = Okul("gazi");
    gazi.dersEkle("fizik", fizik);
    gazi.dersEkle("matematik", matematik);
    gazi.getDers("fizik")->setGecmeNotu(50);
    //fizik.rastgeleNotlar();

    auto main_gecenler = gazi.getDers("fizik")->gecenliste();
    for(auto it = main_gecenler.begin(); it!= main_gecenler.end(); it++){
        std::cout << *it << std::endl;}

    auto main_notno = gazi.getDers("fizik")->notnolist();
    for(auto i = main_notno.begin(); i!= main_notno.end(); i++){
        std::cout << i->first << "->" << i->second << std::endl;
    }
    return 0;
}
