#ifndef STRUC_H_INCLUDED
#define STRUC_H_INCLUDED
#include "mylib.h"

/*struct duom {
  string vardas;
  string pavarde;
  int paz_sk;
  vector <int> pazymiai;
  int egzaminas;
  double galutinis;
};*/

class duom{
private:
    string vardas;
    string pavarde;
    int paz_sk;
    vector <int> pazymiai;
    int egzaminas;
    double galutinis;
public:
    ~duom(){pazymiai.clear();}
    duom(string vardas, string pavarde, int paz_skaicius, int egz, double gal, vector <int> paz);
    duom& operator=(const duom& naujas){
        if(this == &naujas){return *this;}
        vardas = naujas.vardas;
        pavarde = naujas.pavarde;
        paz_sk = naujas.paz_sk;
        egzaminas = naujas.egzaminas;
        galutinis = naujas.galutinis;
        copy(naujas.pazymiai.begin(),naujas.pazymiai.end(),pazymiai.begin());
        return *this;
    }
    double getBalas() const;
};

double vid_med (char tikrinimas, vector <int> &laik, int paz_sk, int egzaminas);
void Nuskaitymas(vector <duom> &func, int &kiek, string pavadinimas, char tikrinimas);
void Generavimas(int dydis, string pavadinimas);
bool Palyginimas(const duom &stud1, const duom &stud2);
#endif // STRUC_H_INCLUDED
