#include "struktura.h"
#include <sstream>
#include <chrono>
#include <algorithm>
#include <random>

using std::cout;
using std::cin;
using std::endl;
std::chrono::time_point<std::chrono::high_resolution_clock> start,end;
float mediana (std::vector<int> pazymiai)
{
    std::sort (pazymiai.begin(), pazymiai.end());

    if(pazymiai.size()%2==0)
        return (pazymiai[pazymiai.size()/2]+pazymiai[pazymiai.size()/2-1])/float(2);
    else
        return pazymiai[pazymiai.size()/2];
}
float vidurkis(std::vector<int> pazymiai){
float sum=0;
    for( std::size_t i=0; i<pazymiai.size(); i++ )
    {
        sum+=pazymiai[i];
    }
    return sum/pazymiai.size();


}

unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
std::default_random_engine generator (seed);
int randomnumber (int a, int b)
{
    std::uniform_int_distribution<int> distribution(a, b);
    return distribution(generator);


}

void checkfile(std::string a)
{
    std::ifstream in;
    in.exceptions ( std::ifstream::failbit | std::ifstream::badbit );
    try
    {
        in.open (a);
    }
    catch (std::ios_base::failure &fail)
    {
        cout << "Exception opening/reading file";
    }

    in.close();
}

void filegen(int a)
{

    int n=1;
    for (int i=1; i<=a; i++)
    {
        cout<<i<<" file gen - ";
       auto  start = std::chrono::high_resolution_clock::now();
        n*=10;
        std::ofstream out(std::to_string(i)+"irasas.txt");
        for(int j=1; j<=n; j++)
        {
            out<<"Vardas"+std::to_string(j)+" ";
            out<<"Pavarde"+std::to_string(j);
            int c=randomnumber(2,15);

            for(int k=0; k<c; k++)
            {
                out<<" "<<randomnumber(1, 10);;
            }
            out<<"\n";
        }
                auto end = std::chrono::high_resolution_clock::now();
                auto elapsed = (std::chrono::duration<double>( end - start ).count());
                std::cout << elapsed<< "s \n";
    }
}

bool isnumber(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void mokinys::sorting(std::deque<mokinys> & duom)
{  std::sort(duom.begin(), duom.end(), [](const mokinys& a, const mokinys& rhs)
            {
                return a.pavarde < rhs.pavarde;
            });

}
void mokinys::sorting(std::list<mokinys> & listduom)
{
    listduom.sort([](const mokinys& a, const mokinys& rhs)
            {
                return a.pavarde < rhs.pavarde;
            });

}

void mokinys::sorting(std::vector<mokinys> & deqduom)
{
     std::sort(deqduom.begin(), deqduom.end(), [](const mokinys& a, const mokinys& rhs)
            {
                return a.pavarde < rhs.pavarde;
            });

}

void s()
{
    start = std::chrono::high_resolution_clock::now();
}
void e()
{
     end = std::chrono::high_resolution_clock::now();
                auto elapsed = (std::chrono::duration<double>( end - start ).count());
                std::cout << elapsed<< "s \n";
}
