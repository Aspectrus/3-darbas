#include "struktura.h"
#include "vector.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;


main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();

    std::vector<mokinys> vvarg;
    Vector<mokinys> Vvarg;
    std::list<mokinys> lvarg;
    std::deque<mokinys> dvarg;
    Vector<mokinys> Vkiet;
    std::vector<mokinys> vkiet;
    std::list<mokinys> lkiet;
    std::deque<mokinys> dkiet;
    std::string pasirinkimas;


    cout<<"1-nuskaityti faila(-us)\n2-sugeneruoti failus\n5-iseiti\n";
 std::vector<mokinys> bs;
    while(std::getline(cin, pasirinkimas)&&pasirinkimas!="6")
{
        if (pasirinkimas=="1")
        {
            cout<<"Pasirinkite 1, 2 ar 3 buda\n";
            while(std::getline(cin, pasirinkimas))
            {
            if(pasirinkimas=="3")
            {
                budas3(vvarg, vkiet, "std::vektroius");
                budas3(Vvarg, Vkiet, "Mano vektorius");
//                budas3(lvarg, lkiet, "Listas");
//                budas3(dvarg, dkiet, "Dekas");

cout<<"SUCCESS\n";    break;
            }

           else if(pasirinkimas=="1")
          {

               //  budas1<std::list<mokinys>>("Listas");
//                budas1<std::deque<mokinys>>("Dekas");
                budas1<Vector<mokinys>>("Mano vektorius");
                budas1<std::vector<mokinys>>("std::vektorius");

            cout<<"SUCCESS\n";    break;
            }
             else if(pasirinkimas=="2")
            {
                budas2<Vector<mokinys>>("Mano vekotrius");
                budas2<std::vector<mokinys>>("std::vektroius");
//                budas2<std::list<mokinys>>("Listas");
//                budas2<std::deque<mokinys>>("Dekas");

            cout<<"SUCCESS\n";
            break;
            }
    else
    {
		cout << "Invalid input. Try again. " << endl;
    }
              }
        }


        else if(pasirinkimas=="2")
        {
            filegen(n);
cout<<"SUCCESS\n";
        }
    else
    {
		cout << "Invalid input. Try again. " << endl;
    }
  cout<<"1-nuskaityti faila(-us)\n2-sugeneruoti failus\n5-iseiti\n";
  }


    return 0;
}

