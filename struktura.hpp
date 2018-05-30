#ifndef STRUKTURA_HPP
#define STRUKTURA_HPP
#include <algorithm>

using std::cout;
using std::cin;




template <typename T> void spausdintifaila(const T kiet, const T varg, int i)
{



std::ofstream out("output"+std::to_string(i)+".txt");
out<<std::left<<std::setw(15)<<"Pavarde"<<std::left<<std::setw(15) <<"Vardas"<<std::left<<std::setw(20) <<"Galutinis-Vidurkis"<<std::left<<std::setw(15) <<"Galutine-Mediana\n";
if(kiet.size()!=0)
{out<<"Kieti\n";
 for(auto i:kiet)
    {


        out<<std::setw(15)<<i.pavarde<<std::left<<std::setw(15)<<i.vardas<<std::left<<std::setw(20);
        out<<std::setprecision(3)<<i.galvid<<std::left<<std::setw(15);
        out<<std::setprecision(3)<<i.galmed<<"\n";


    }

}
if(varg.size()!=0)
{out<<"Vargsai\n";
 for(auto i:varg)
    {

        out<<std::setw(15)<<i.pavarde<<std::left<<std::setw(15)<<i.vardas<<std::left<<std::setw(20);
        out<<std::setprecision(3)<<i.galvid<<std::left<<std::setw(15);
        out<<std::setprecision(3)<<i.galmed<<"\n";


    }

}
out.close();


}
    template<typename Container>
 void budas1read(std::string name)
{
    Container z, a, b;

    std::ifstream in (name);
    std::string eil;
    mokinys temp;
    while(std::getline(in, eil))
    {
        std::istringstream ss(eil);
        ss>>temp.vardas;
        ss>>temp.pavarde;
        int num;
        while(ss>>num) temp.pazymiai.push_back(num);
        int egzaminas=temp.pazymiai[temp.pazymiai.size()-1];
        temp.pazymiai.pop_back();
        temp.galmed=0.6*egzaminas+temp.mediana(temp.pazymiai)*0.4;
        temp.galvid=0.6*egzaminas+temp.vidurkis(temp.pazymiai)*0.4;
        z.push_back(mokinys(temp));
        temp.pazymiai.clear();

    }
    in.close();
    float galBalas;
     int g=0;
    for(auto i:z)
   {
        galBalas=temp.vidurkis(i.pazymiai);
        if(galBalas>=6) a.push_back(i);
        else b.push_back(i);
   }

//    temp.sorting(a);
//    temp.sorting(b);
 cout<<z.size()<<" - ";
  z.clear();
  a.clear();
  b.clear();


}


template<typename Container>
 void budas2read(std::string name)
{
  int g=0;
    Container z, a;
    std::ifstream in (name);
    std::string eil;
    mokinys temp;

    while(std::getline(in, eil))
    {
        std::istringstream ss(eil);
        ss>>temp.vardas;
        ss>>temp.pavarde;
        int num;
        while(ss>>num)
        temp.pazymiai.push_back(num);
      int egzaminas=temp.pazymiai[temp.pazymiai.size()-1];
        temp.pazymiai.pop_back();
        temp.galmed=0.6*egzaminas+temp.mediana(temp.pazymiai)*0.4;
        temp.galvid=0.6*egzaminas+temp.vidurkis(temp.pazymiai)*0.4;
        z.push_back(mokinys(temp));
                temp.pazymiai.clear();

    }
    in.close();

                       auto it = std::partition(z.begin(), z.end(), [](const mokinys& g)
                       {



                           float galBalas=g.vidurkis(g.pazymiai);
                         return(galBalas>=6);
                       });


    auto e=z.end();
 e--;
for(e; e!=it;)
{
    a.push_back(*e);
    e--;
    z.pop_back();

}

a.push_back(*it);
z.pop_back();
//    temp.sorting(z);
//    temp.sorting(a);
 cout<<z.size()+a.size()<<" - ";
   z.clear();
   a.clear();


}


 template<typename Container>
void budas3read(Container& varg, Container& kiet, std::string name)
{
    std::ifstream in (name);
    std::string eil;
    mokinys temp;
    while(std::getline(in, eil))
    {
        std::istringstream ss(eil);
        ss>>temp.vardas;
        ss>>temp.pavarde;
        int num;
        std::vector<int> vtemp;
        while(ss>>num)
            vtemp.push_back(num);
    int egzaminas=vtemp[vtemp.size()-1];
    vtemp.pop_back();
    temp.galmed=0.6*egzaminas+temp.mediana(vtemp)*0.4;
    temp.galvid=0.6*egzaminas+temp.vidurkis(vtemp)*0.4;
       if(temp.vidurkis(vtemp)>=6)
            kiet.push_back(mokinys(temp));
        else
            varg.push_back(mokinys(temp));
    }
        in.close();

//temp.sorting(varg);
//temp.sorting(kiet);

}



template<typename Container>
void budas1 (std::string name)
{
    cout<<name<<'\n';
    for(int i=1; i<=n; i++)
    {
        s();
        checkfile(std::to_string(i)+"irasas.txt");
        budas1read<Container>(std::to_string(i)+"irasas.txt");
        e();
    }

}

template<typename Container>
void budas2(std::string name)
{
    cout<<name<<'\n';
    for(int i=1; i<=n; i++)
    {
        s();
        checkfile(std::to_string(i)+"irasas.txt");
        budas2read<Container>(std::to_string(i)+"irasas.txt");
        e();
    }

}
template <typename Container>
void budas3(Container& varg, Container& kiet, std::string name)
{                        cout<<name<<'\n';

         for(int i=1; i<=n; i++)
               {s();
                checkfile(std::to_string(i)+"irasas.txt");
                budas3read(varg, kiet, std::to_string(i)+"irasas.txt");
                cout<<varg.size()+kiet.size()<<" - ";
                varg.clear();
                kiet.clear();
                e();
               }
}


#endif
