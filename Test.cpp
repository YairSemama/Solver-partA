#include "doctest.h"
#include <complex>
#include "solver.hpp"
#include <iostream>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;
<<<<<<< HEAD

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


=======
>>>>>>> d8ad4fe245b8de6954a4cc598028890256efd67b

// 5
TEST_CASE("Complex +"){

    ComplexVariable y;
    CHECK(solve(y == 3i+5) == std::complex<double>(5,3));
    CHECK(solve(y+5 == -6i) == std::complex<double>(-5,-6));
    CHECK(solve(y+5i == 2*y+3i) == std::complex<double>(0,2));
    CHECK(solve(3*y+5i == 2*y+10i+3) == std::complex<double>(3,5));
    CHECK(solve(5*y+14i == 10*y+4i) == std::complex<double>(0,2));
}

// 5
TEST_CASE("Complex -"){

    ComplexVariable y;
    CHECK(solve(y == 5-3i) == std::complex<double>(5,-3));
    CHECK(solve(y-5 == -6i) == std::complex<double>(5,-6));
    CHECK(solve(y-5i == 2*y-3i) == std::complex<double>(0,-2));
    CHECK(solve(3*y-5i == 2*y-10i-3) == std::complex<double>(-3,-5));
    CHECK(solve(5*y-14i == 10*y-6i) == std::complex<double>(0,-2));
}

// 5
TEST_CASE("Complex *"){

    ComplexVariable y;
    CHECK(solve(5*y == 25i) == std::complex<double>(0,5));
    CHECK(solve(1.5*y-15 == 30i) == std::complex<double>(10,20));
    CHECK(solve(5*y-5i == 6*y-5i) == std::complex<double>(0,0));
    CHECK(solve(100*y == 100*y) == std::complex<double>(0,0));
    CHECK(solve(1000*y == 0) == std::complex<double>(0,0));
}

// 10
TEST_CASE("Complex ^"){

    ComplexVariable y;
    CHECK(solve(y^2 == 25) == std::complex<double>(5,0) || std::complex<double>(-5,0));
    CHECK(solve(y^2 == 1) == std::complex<double>(1,0) || std::complex<double>(-1,0));
    CHECK(solve(3*y^2 == 2*y^2+49) == std::complex<double>(7,0) || std::complex<double>(-7,0));
    CHECK(solve(20*y^2 == 20) == std::complex<double>(1,0));
    CHECK(solve(33*y^2 == 0) == std::complex<double>(0,0));
    CHECK_THROWS(solve(y^2 + 7 == 0));
    CHECK_THROWS(solve(y^2 == 5i));
    CHECK_THROWS(solve(y^2 == -1));
    CHECK_THROWS(solve(y^2 + y+ 7 == 0));
    CHECK_THROWS(solve(y^2 + y == 0));
}

// 15
TEST_CASE("Complex /"){

    ComplexVariable y;
    CHECK(solve(y/2 == 25) == std::complex<double>(50,0));
    CHECK(solve(y/10 + 5i == 1) == std::complex<double>(2,-10));
    CHECK(solve((3*y)/3 == 49+33i) == std::complex<double>(49,33));
    CHECK(solve((25*y)/100 == 100+1i) == std::complex<double>(400,4));
    CHECK(solve(y/15+30*y/15 == 10+5i) == std::complex<double>(20,10));
    CHECK(solve(15/y == 10) == std::complex<double>(1.5,0));
    CHECK(solve((y/10)/10/10 == 1000+5000i) == std::complex<double>(1,5));
    CHECK(solve(10/(10/10)+30*y/15 == y+10+5i) == std::complex<double>(0,5));
    CHECK(solve(0 == y/2+10+5i) == std::complex<double>(-20,-10));
    CHECK(solve((12*y)/3 + 4*y -7*y == -10+5i) == std::complex<double>(-10,5));
    CHECK_THROWS(solve(y/0 == 0));
    CHECK_THROWS(solve(10/y == 0));
    CHECK_THROWS(solve(y/(1-1) == -1));
    CHECK_THROWS(solve(y/10-y/10 == 1));
    CHECK_THROWS(solve((25*y) + ((5))== 25*y));
}

// 10
TEST_CASE("Complex mix"){

    ComplexVariable y;
    CHECK(solve(y^2+6*y-16 == 0 ) == std::complex<double>(2,0) || std::complex<double>(-8,0));
    CHECK((solve((3)*(3)*(y)^2 == 81)) == std::complex<double>(3,0) || std::complex<double>(-3,0));
    CHECK(solve(3*y^2 == 2*y^2+49) == std::complex<double>(7,0));
    CHECK(solve((10/5)*y^2 +10*y == 100) == std::complex<double>(5,0) || std::complex<double>(-10,0));
    CHECK(solve(y*y == 1024) == std::complex<double>(32,0) || std::complex<double>(32,0));
    CHECK_THROWS(solve(1i-1i+1i-1i+1i == y+y-y+y-y-y));
    CHECK_THROWS(solve(y^2+1*y== -1));
    CHECK_THROWS(solve(5*y^2 +1034 == -1));
    CHECK_THROWS(solve(y^y == 0));
    CHECK_THROWS(solve(10+10+15*y+30*y+y^2+y^2-20 + y +10000== 0));
}