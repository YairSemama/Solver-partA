#include "doctest.h"
#include <complex>
#include "solver.hpp"
#include <iostream>

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

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