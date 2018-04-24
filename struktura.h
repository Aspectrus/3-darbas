#ifndef STRUKTURA_H_INCLUDED
#define STRUKTURA_H_INCLUDED
#include <list>
#include <deque>
#include <vector>
#include <string>
#include <chrono>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>

class mokinys
{
private:
    std::string vardas, pavarde;
    float galmed, galvid;
    std::vector<int> pazymiai;
    int egzaminas;
public:

template<typename Container> friend void budas1read(std::string);
template<typename Container> friend void budas3read(Container& , Container& , std::string );
template<typename Container> friend void budas2read(std::string);

void sorting(std::deque<mokinys>&);
void sorting(std::list<mokinys>&);
void sorting(std::vector<mokinys>&);



};
const int n=6; //failu skaicius

float vidurkis(std::vector<int>);
float mediana (std::vector<int>);
int randomnumber(int, int);
void checkfile(std::string);
void filegen(int);
void sorting(std::deque<mokinys> & );
void sorting(std::list<mokinys> & );
void sorting(std::vector<mokinys> & );
bool isnumber(const std::string&);
void s();
void e();

#include "struktura.hpp"

#endif // STRUKTURA_H_INCLUDED
