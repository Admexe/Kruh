#include<iostream> /* vstupne a vystupne funkcie nieco ako stdio.h*/
#include "kruh.h"

int main()
{
    //Kruh Prvy;
    Kruh kruhy[3] ={{3,'a'}, {7,'b'},{12,'l'}};
    Kruh Spolu (0,'l');
    /*for(int i=0; i <3; ++i)
    {
        Spolu = Spolu.pricitaj(kruhy[i]);
    }
    Spolu.vypisKruh();
    Spolu.vydel(3).vypisKruh();*/
    //Kruh Treti=Spolu.vydel(3);
    //Treti.vypisKruh();
    /*Prvy.setNazov('k');
    //   Prvy.setPolomer(5);
    Prvy.vypisKruh();
    std::cout<<"Obvod kruhu je: "<<Prvy.getObvod()<<std::endl;
    std::cout<<"Obsah kruhu je: "<<Prvy.getObsah()<<std::endl;
    Kruh Druhy (8,'m');
    Kruh Treti('h');
    Kruh Stvrty(14.0f);
    std::cout<<Prvy.jeVacsi(Druhy);
    Prvy.spocitajKruh(Druhy).vypisKruh();
    Prvy.vydel(5).vypisKruh();*/
    for(auto i:kruhy )
    {
        Spolu=Spolu.pricitaj(i);
    }
    //asdSpolu.vypisKruh();
    Spolu.vydel(3).vypisKruh();
    Spolu.pripocitaj(13).vypisKruh();


    return 0;
}
Kruh::Kruh()
{
    std::cout<<"Zadaj polomer: ";
    std::cin>>polomer;
    std::cout<<"Zadaj mazov: ";
    std::cin>>nazov;
}

Kruh::Kruh(char mojNazov)
{
    nazov=mojNazov;
    std::cout<<"Zadaj polomer: ";
    std::cin>>polomer;
}

Kruh::Kruh(float mojPolomer)
{
    polomer=mojPolomer;
    std::cout<<"Zadaj mazov: ";
    std::cin>>nazov;

}

bool Kruh::jeVacsi
        (Kruh otherKruh) const
{
return polomer>otherKruh.polomer;
// return (polomer>otherKruh.polomer)?true:false;
}

Kruh Kruh::pricitaj(Kruh other) const
{
return {polomer+other.polomer, (polomer>other.polomer)?nazov:other.nazov};
}

Kruh Kruh::vydel(float cislo) const
{
return {polomer/cislo,nazov};
}
Kruh::Kruh(float mojPolomer, char mojNazov)
{
    polomer=mojPolomer;
    nazov=mojNazov;
}

float Kruh::getPolomer() const
{
return polomer;
}
char Kruh::getNazov() const
{
return nazov;
}
void Kruh::setPolomer(float mojPolomer)
{
    //this->
    polomer=mojPolomer;
}
void Kruh::setNazov(char mojNazov)
{
    nazov=mojNazov;
}
float Kruh::getObvod() const
{
return 2*PI*polomer;
}
float Kruh::getObsah() const
{
return PI*polomer*polomer;
}
void Kruh::vypisKruh() const
{
std::cout << "Kruh " <<nazov <<" ma polomer "<<polomer<<std::endl;
}
Kruh Kruh::pripocitaj(float cislo) const
{
    //return Kruh(polomer+cislo,nazov);
    return{polomer+cislo,nazov};
}



