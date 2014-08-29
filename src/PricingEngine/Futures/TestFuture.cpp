#include <gtest/gtest.h>
#include "Future.h"

class TestFuture : public testing::Test
{
protected:

    virtual void Setup()
    {
        newFuture = Future(1,1,1);
    }

    virtual void TearDown()
    {

    }

    Future newFuture;
};



TEST(TestFuture, Price)
{
    ASSERT_EQ(1/365 , newFuture.Price());
}
