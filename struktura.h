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
/**
 *@brief class for gathering student final marks
 */
class mokinys
{

private:
    std::string vardas, pavarde;
    float galmed, galvid;
    std::vector<int> pazymiai;
public:

/**
 *
 * @tparam Container
 * first file reading function for all containers
 */
template<typename Container> friend void budas1read(std::string);

/**
 * print file function
 */

template <typename T> friend void spausdintifaila(const T kiet, const T varg, int i);

/**
 *
 * @tparam
 * third file reading function for all containers
 */
template<typename Container> friend void budas3read(Container& , Container& , std::string );
/**
 *
 * @tparam
 * second file reading function for all containers
 */
template<typename Container> friend void budas2read(std::string);

/**
 *deque sorting
 */
void sorting(std::deque<mokinys>&);
/**
 *list sorting
 */
void sorting(std::list<mokinys>&);
/**
 * vector sorting
 */
void sorting(std::vector<mokinys>&);
/**
 * function that returns the average mark
 *
 * @return
 */
    float vidurkis(std::vector<int>);
    /**
     * the average const used for partition boolean function
     * @return
     */
     const float vidurkis( std::vector<int>) const;

    /**
     *function that returns the meadian mark
     * @return
     */
    float mediana (std::vector<int>);




};
const int n=6; //failu skaicius

/**
 * number generator function
 */
int randomnumber(int, int);
/**
 * file checking function
 */
void checkfile(std::string);
/**
 *
 * files generating function
 */
void filegen(int);
/**
 *
 */
void sorting(std::deque<mokinys> & );
/**
 *
 */
void sorting(std::list<mokinys> & );
/**
 *
 */
void sorting(std::vector<mokinys> & );
/**
 *function that returns true if the input is number
 * @return
 */
bool isnumber(const std::string&);
/**
 *start timer function
 */
void s();
/**
 * end timer function
 */
void e();
#include "struktura.hpp"

#endif // STRUKTURA_H_INCLUDED

