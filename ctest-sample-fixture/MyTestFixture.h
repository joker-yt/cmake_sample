#ifndef __MYTESTFIXTURE_H__
#define __MYTESTFIXTURE_H__

#include <iostream>
#include <string>
#include "myclass.h"

using namespace std;

class MyTestFixture : public testing::Test
{
protected:
    myclass<int> cl;
    virtual void SetUp()
    {
        cout << "SetUp" << endl;
    }
    virtual void TearDown()
    {
        cout << "TearDown" << endl;
    }
};

class MyTestFixtureStr : public testing::Test
{
protected:
    myclass<string> cl;
    virtual void SetUp()
    {
        cout << "String SetUp" << endl;
    }
    virtual void TearDown()
    {
        cout << "String TearDown" << endl;
    }
};
#endif /*__MYTESTFIXTURE_H__*/