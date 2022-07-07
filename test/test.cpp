//
// Created by mr_sanders on 6/29/22.
//
#include "catch.hpp"
#include "src/constant.h"
SCENARIO( "Verify no argument returns Hello World", "[test_Hello.cpp]" )
{
    REQUIRE( constant() == 1 );
}