#include "doctest.h"
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("LOWER FUNCTION OF REAL NUMBERS")
{
    RealVariable x ;
            CHECK(solve(x+4 == 10) == 6);
            CHECK(solve(x+4-4 == 10) == 10);
            CHECK(solve(x+4 == 10 + 2*x) == double (-6));
            CHECK(solve(x == 10+2*x) == double(-10));
            CHECK(solve(x+x+x == 9) == double(3));
            CHECK(solve(x+4 == 10) == 6);
            CHECK(solve(3*x +8+7 == 0) == double(5));
            CHECK(solve(-1*x==8) == -8);
            CHECK(solve(3*x/3 == 1) == double(1));
            CHECK(solve(4*x -3 +(15/3) == 10) == double(2));
            CHECK(solve(18/3 == x) == 6);

}

TEST_CASE("REALv EXEPTION ")
{
    RealVariable x ;
            CHECK_THROWS(solve(-1*x^2 == 81));
            CHECK_THROWS(solve(x^2 == -4));
            CHECK_THROWS(solve(x^2 == -81));
            CHECK_THROWS(solve(x^2- x^2 == 81));
            CHECK_THROWS(solve(x+5));
            CHECK_THROWS(solve(4 + x^2 == -60));
            CHECK_THROWS(solve(x^2 == -81 + -81));
            CHECK_THROWS(solve(81+x^2 + 1 == 81));
            CHECK_THROWS(solve(x^3 + x^3 - 2*x^3== 81));
            CHECK_THROWS(solve(x^4 == -81));



}

TEST_CASE("REALv FUNCTION WITH LOWER CASE POWER")
{
    RealVariable x  ;

            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );
            CHECK(solve(-1*x^2+2 == -2) ==(-2 || 2) );

}


TEST_CASE("REALv FUNCTION WITH POWER WITH 2 ANSWER")
{
    RealVariable x ;
            CHECK(solve(6*x^2 +6*x +4 == 4*x^2+2*x+4) ==(-2 || 0) );
            CHECK(solve(3*x^2 +22*x +57 == x^2-3) == (-5 ||-6));
            CHECK(solve(-1*x^2+6*x-4 == -2*x^2-4) == (-9 || 0));
            CHECK(solve(-1*x^2 +22*x +56 == -3*x^2-4) == (-6 || -5));
            CHECK(solve(2*x^2-8*x +8 == 2) == (1 || 3));
            CHECK(solve(2*x^2 +4*x +1  == -1) == -1);
            CHECK(solve(2*x^2 +5*x -11  == -3*x-1) == (1 || -5));
            CHECK(solve(2*x^2 +9*x +12  ==x^2 +3*x+4)==(-2 || -4) )  ;
            CHECK(solve(2*x^2 -18*x +22  ==-4*x-2) == (3 || 4));
            CHECK(solve(x^2+7*x+7 == 4*x-3) == (1 || -4));
            CHECK(solve(x^2-7*x-13 == -4*x-3) == (-2 || 5));

            CHECK(solve(x^2 + 8*x + 12 == 0) ==(-2 || -6) );
            CHECK(solve(4*x^2 + 7*x == 2*x^2 + x) == (0 || 4));
            CHECK(solve(2*x^2+4*x-21== -4*x^+3) == (-6 || 2));
            CHECK(solve(2*x^2 +14*x +15 == 3) == (-6 || -1));
            CHECK(solve(x^2+5*x +7 == -1*x-1) == (-2 || -4));
            CHECK(solve(x^2 +6*x +9 == 1) == (-2 || -4));
            CHECK(solve(2*x^2 -5 == 3) == (-2 || 2));
            CHECK(solve(2*x^2 +8*x +9  == 1)==(-2 || -2) )  ;
            CHECK(solve(x^2 +2*x -36 == -2) == (-6 || 4));
            CHECK(solve(x^2== 0 )== 0);
            CHECK(solve(x^2-x^2 == 0 ) == (0));




}