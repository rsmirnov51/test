#include "catch.hpp"

using namespace std;

unsigned int Factorial( unsigned int number );

TEST_CASE("Stepen function complete", "[foo]"){
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
}

