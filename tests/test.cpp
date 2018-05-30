#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../struktura.h"
#include "../struktura.hpp"

using testing::Eq;

namespace {
class ClassDeclaration : public testing::Test{
public:
    mokinys obj;
    ClassDeclaration()
    {
        obj;
    }

};
}
/**
 * medianos ir vidurkio patikrinimas
 */
TEST_F(ClassDeclaration, medianirvidurkis)
{
    std::vector<int> b {1, 5, 6, 3, 8, 1, 3, 3};
    EXPECT_EQ(obj.vidurkis(b), 3.75);
    EXPECT_EQ(obj.mediana(b), 3);

}
/**
 * in number funkcijos patikrinimas
 */
TEST_F(ClassDeclaration, isnumber)
{
    bool a=isnumber("12.646.1");
    EXPECT_EQ(a, 0);
    bool b=isnumber("0.000a");
    EXPECT_EQ(b, false);
    bool c=isnumber("5");
    EXPECT_EQ(c, true);
}
TEST_F(ClassDeclaration, Test3)
{



}

