#include "doctest.h"
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;
TEST_CASE("Test")
{
    RealVariable x;

<<<<<<< HEAD

            CHECK(solve(2*x-4 == 10) ==7);
            CHECK(solve(3*x-5 == 1) ==2);
            CHECK(solve(4*x-4 == 16) ==5);
            CHECK(solve(2*x-4 == 10) ==7);
            CHECK(solve(5*x-6 == 14) ==4);
            CHECK(solve(1*x-4 == 3) ==7);
            CHECK(solve(5*x-4 == 36) ==8);
            CHECK(solve(2*x-3 == 15) ==9);
            CHECK(solve(5*x-2 == 8) ==2);
            CHECK(solve(5*x-3 == 2) ==1);
=======
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
            CHECK_THROWS(solve(x^2 == -81 -81));
            CHECK_THROWS(solve(81+x^2 + 1 == 81));
            CHECK_THROWS(solve(x^3 + x^3 - 2*x^3== 81));
            CHECK_THROWS(solve(x^4 == -81));

}

TEST_CASE("REALv FUNCTION WITH LOWER CASE POWER")
{
    RealVariable x  ;

    CHECK((solve((-1*x^2+2) == -2) == -2 || solve((-1*x^2+2) == -2) == 2)) ;
    CHECK(solve((x+6 +x^2 - x^2)== -2) == -6 );
    CHECK(solve(18*x+4/4 == 19) == 1 );
    CHECK(solve(x^2 +3*x = 3*x) ==0 );
    CHECK_THROWS(solve(0*x == 2));
    CHECK_THROWS(solve((0*x +x) == (2 +x)) == int(2));
    CHECK_THROWS(solve(-1 == 2+0*x));
    CHECK_THROWS(solve(1+4 == 6+x^2));
    CHECK_THROWS(solve(1*x -x == 2));
}




TEST_CASE("REALv FUNCTION WITH POWER WITH 2 ANSWER") {
    RealVariable x;
            CHECK((solve((x^2) == 1) == 1 || solve((x^2) == 1) == -1));
            CHECK((solve(6 * x ^ 2 + 6 * x + 4 == 4 * x ^ 2 + 2 * x + 4) == -2 || solve(6 * x ^ 2 + 6 * x + 4 == 4 * x ^ 2 + 2 * x + 4) == 0));
            CHECK((solve(3 * x ^ 2 + 22 * x + 57 == x ^ 2 - 3) == -5 ||solve(3 * x ^ 2 + 22 * x + 57 == x ^ 2 - 3) == -6));
            CHECK((solve(-1 * x ^ 2 + 6 * x - 4 == -2 * x ^ 2 - 4) == -9 ||solve(-1 * x ^ 2 + 6 * x - 4 == -2 * x ^ 2 - 4) == 0));
            CHECK((solve(-1 * x ^ 2 + 22 * x + 56 == -3 * x ^ 2 - 4) == -6 ||solve(-1 * x ^ 2 + 22 * x + 56 == -3 * x ^ 2 - 4) == -5));
            CHECK((solve(2 * x ^ 2 - 8 * x + 8 == 2) == 1 || solve(2 * x ^ 2 - 8 * x + 8 == 2) == 3));
            CHECK(solve(2 * x ^ 2 + 4 * x + 1 == -1) == -1);
            CHECK((solve(2 * x ^ 2 + 5 * x - 11 == -3 * x - 1) == 1 || solve(2 * x ^ 2 + 5 * x - 11 == -3 * x - 1) == -5));
            CHECK((solve(2 * x ^ 2 + 9 * x + 12 == x ^ 2 + 3 * x + 4) == -2 ||solve(2 * x ^ 2 + 9 * x + 12 == x ^ 2 + 3 * x + 4) == -4));
            CHECK((solve(2 * x ^ 2 - 18 * x + 22 == -4 * x - 2) == 3 ||solve(2 * x ^ 2 - 18 * x + 22 == -4 * x - 2) == 4));
            CHECK((solve(x ^ 2 + 7 * x + 7 == 4 * x - 3) == 1 || solve(x ^ 2 + 7 * x + 7 == 4 * x - 3) == -4));
            CHECK((solve(x ^ 2 - 7 * x - 13 == -4 * x - 3) == -2 || solve(x ^ 2 - 7 * x - 13 == -4 * x - 3) == 5));

            CHECK((solve(x ^ 2 + 8 * x + 12 == 0) == -2 || solve(x ^ 2 + 8 * x + 12 == 0) == -6));
            CHECK((solve(4 * x ^ 2 + 7 * x == 2 * x ^ 2 + x) == 0 || solve(4 * x ^ 2 + 7 * x == 2 * x ^ 2 + x) == 4));
            CHECK((solve(2 * x ^ 2 + 4 * x - 21 == -4 * x ^ +3) == -6 || solve(2 * x ^ 2 + 4 * x - 21 == -4 * x ^ +3) == 2));
            CHECK((solve(2 * x ^ 2 + 14 * x + 15 == 3) == -6 || solve(2 * x ^ 2 + 14 * x + 15 == 3) == -1));
            CHECK((solve(x ^ 2 + 5 * x + 7 == -1 * x - 1) == -2 || solve(x ^ 2 + 5 * x + 7 == -1 * x - 1) == -4));
            CHECK((solve(x ^ 2 + 6 * x + 9 == 1) == -2 || solve(x ^ 2 + 6 * x + 9 == 1) == -4));
            CHECK((solve((2 * x ^ 2 - 5) == 3) == -2 || solve((2 * x ^ 2 - 5) == 3) == 2));
            CHECK((solve(2 * x ^ 2 + 8 * x + 9 == 1) == -2 || solve(2 * x ^ 2 + 8 * x + 9 == 1) == -2));
            CHECK(solve(((x ^ 2) == 0) == 0));
            CHECK(solve((x ^ 2 - x ^ 2) == 0) == 0);

}

// 5
TEST_CASE("Complex +"){

    ComplexVariable y;
    CHECK(solve(y == y-y+3i+5) == std::complex<double>(5,3));
    CHECK(solve(y+5 == y-y+6i) == std::complex<double>(-5,-6));
    CHECK(solve(y+5i == 2*y+3i) == std::complex<double>(0,2));
    CHECK(solve(3*y+5i == 2*y+10i+3) == std::complex<double>(3,5));
    CHECK(solve(5*y+14i == 10*y+4i) == std::complex<double>(0,2));
}
>>>>>>> 6cc26b2392a35d46c69d48ea12c6bbc085b60f24


<<<<<<< HEAD
=======
    ComplexVariable y;
    CHECK(solve(y == y-y+5-3i) == std::complex<double>(5,-3));
    CHECK(solve(y-5 == y-y+-6i) == std::complex<double>(5,-6));
    CHECK(solve(y-5i == 2*y-3i) == std::complex<double>(0,-2));
    CHECK(solve(3*y-5i == 2*y-10i-3) == std::complex<double>(-3,-5));
    CHECK(solve(5*y-14i == 10*y-6i) == std::complex<double>(0,-2));
}
>>>>>>> 6cc26b2392a35d46c69d48ea12c6bbc085b60f24


<<<<<<< HEAD
            CHECK(solve(3*x-1 == 2) ==1);
            CHECK(solve(3*x-2 == 4) ==2);
            CHECK(solve(4*x-1 == 3) ==1);
            CHECK(solve(4*x-2 == 6) ==2);
            CHECK(solve(5*x-1 == 4) ==1);
            CHECK(solve(5*x-2 == 8) ==2);
            CHECK(solve(6*x-1 == 5) ==1);
            CHECK(solve(6*x-2 == 10) ==2);
            CHECK(solve(7*x-1 == 6) ==1);
            CHECK(solve(7*x-2 == 12) ==2);

            CHECK(solve(3*x-3 == 6) ==3);
            CHECK(solve(3*x-4 == 5) ==3);
            CHECK(solve(4*x-3 == 9) ==3);
            CHECK(solve(4*x-4 == 8) ==3);
            CHECK(solve(5*x-3 == 12) ==3);
            CHECK(solve(5*x-4 == 11) ==3);
            CHECK(solve(6*x-3 == 15) ==3);
            CHECK(solve(6*x-4 == 14) ==3);
            CHECK(solve(7*x-3 == 18) ==3);
            CHECK(solve(7*x-4 == 17) ==3);


            CHECK(((solve((x^2) == 1) ==1) || (solve((x^2) == 1) ==-1)));
            CHECK(((solve((x^2) == 4) ==2 )||( solve((x^2) == 4) ==-2)));
            CHECK(((solve((x^2) == 9) ==3) ||( solve((x^2) == 9) ==-3)));
            CHECK(((solve((x^2) == 16) ==4) || (solve((x^2) == 16) ==-4)));
            CHECK(((solve((x^2) == 25) ==5) || (solve((x^2) == 25) ==-5)));
            CHECK(((solve((x^2) == 36) ==6) || (solve((x^2) == 36) ==-6)));
            CHECK(((solve((x^2) == 49) ==7) || (solve((x^2) == 49) ==-7)));
            CHECK(((solve((x^2) == 64) ==8) || (solve((x^2) == 64) ==-8)));
            CHECK(((solve((x^2) == 81) ==9) || (solve((x^2) == 81) ==-9)));
            CHECK(((solve((x^2) == 100) ==10) || (solve((x^2) == 100) ==-10)));

            CHECK(((solve((x^2) == 121) ==11) || (solve((x^2) == 121) ==-11)));
            CHECK(((solve((x^2) == 1936) ==44) ||( solve((x^2) == 1936) ==-44)));
            CHECK(((solve((x^2) == 9801) ==99) || (solve((x^2) == 9801) ==-99)));
            CHECK(((solve((x^2) == 1089) ==33) || (solve((x^2) == 1089) ==-33)));
            CHECK(((solve((x^2) == 484) ==22) || (solve((x^2) == 484) ==-22)));
            CHECK(((solve((x^2) == 3025) ==55) || (solve((x^2) == 3025) ==-55)));
            CHECK(((solve((x^2) == 4356) ==66) || (solve((x^2) == 4356) ==-66)));
            CHECK(((solve((x^2) == 5929) ==77)|| (solve((x^2) == 5929) ==-77)));
            CHECK(((solve((x^2) == 7744) ==88) || (solve((x^2) == 7744) ==-88)));
            CHECK(((solve((x^2) == 12321) ==111) || (solve((x^2) == 12321) ==-111)));

            CHECK(((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==4) ||(solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x) ==-4)));
            CHECK(((solve((x^2) + 3*x + 6.0 == 12 + 6.0*x/2 - x) ==2 )|| (solve((x^2) + 3*x + 6.0 == 12 + 6.0*x/2 - x) ==-3)));//16
            CHECK(((solve((x^2) + 2*x + 5.0 == 27 + 3.0*x/2 - x) ==4 )|| (solve((x^2) + 2*x + 5.0 == 27 + 3.0*x/2 - x) ==-5.5)));//29
            CHECK(((solve((x^2) + 5*x + 7.0 == 18 + 5.0*x/2 - x) ==2 )|| (solve((x^2) + 5*x + 7.0 == 18 + 5.0*x/2 - x) ==-5.5)));//21
            CHECK(((solve((x^2) + 5*x + 1.0 == 22 + 4.0*x/2 - x) ==3 )|| (solve((x^2) + 5*x + 1.0 == 22 + 4.0*x/2 - x) ==-7)));//25
            CHECK(((solve((x^2) + 9*x + 3.0 == 51 + 4.0*x/2 - x) ==4 )|| (solve((x^2) + 9*x + 3.0 == 51 + 4.0*x/2 - x) ==-12)));//55
            CHECK(((solve((x^2) + 1*x + 1.0 == 1 + 6.0*x/2 - x) ==1 )|| (solve((x^2) + 1*x + 1.0 == 1 + 6.0*x/2 - x) ==0)));//3
            CHECK(((solve((x^2) + 2*x + 8.0 == 33 + 6.0*x/2 - x) ==5 )|| (solve((x^2) + 2*x + 8.0 == 33 + 6.0*x/2 - x) ==-5)));//43
            CHECK(((solve((x^2) + 2*x + 5.0 == 41 + 6.0*x/2 - x) ==6 )|| (solve((x^2) + 2*x + 5.0 == 41 + 6.0*x/2 - x) ==-6)));//53
            CHECK(((solve((x^2) + 2*x + 10.0 == 16 + 4.0*x/2 - x) ==2 )||( solve((x^2) + 2*x + 10.0 == 16 + 4.0*x/2 - x) ==-3)));//18

            CHECK(((solve((x^2) + 1*x + 1.0 == 4 + 0.0*x/2 - x) ==1) ||( solve((x^2) + 1*x + 1.0 == 4 + 0.0*x/2 - x) ==-3)));//3
            CHECK(((solve((x^2) + 1*x + 2.0 == 10 + 0.0*x/2 - x) ==2) ||( solve((x^2) + 1*x + 2.0 == 10 + 0.0*x/2 - x) ==-4)));//8
            CHECK(((solve((x^2) + 3*x + 3.0 == 24 + 0.0*x/2 - x) ==3 )|| (solve((x^2) + 3*x + 3.0 == 24 + 0.0*x/2 - x) ==-7)));//21
            CHECK(((solve((x^2) + 4*x + 4.0 == 40 + 0.0*x/2 - x) ==4 )|| (solve((x^2) + 4*x + 4.0 == 40 + 0.0*x/2 - x) ==-9)));//36
            CHECK(((solve((x^2) + 5*x + 5.0 == 60 + 0.0*x/2 - x) ==5 )|| (solve((x^2) + 5*x + 5.0 == 60 + 0.0*x/2 - x) ==-11)));//55
            CHECK(((solve((x^2) + 6*x + 6.0 == 84 + 0.0*x/2 - x) ==6 )|| (solve((x^2) + 6*x + 6.0 == 84 + 0.0*x/2 - x) ==-13)));//78
            CHECK(((solve((x^2) + 7*x + 7.0 == 112 + 0.0*x/2 - x) ==7 )|| (solve((x^2) + 7*x + 7.0 == 112 + 0.0*x/2 - x) ==-15)));//105
            CHECK(((solve((x^2) + 8*x + 8.0 == 144 + 0.0*x/2 - x) ==8 )|| (solve((x^2) + 8*x + 8.0 == 144 + 0.0*x/2 - x) ==-17)));//136
            CHECK(((solve((x^2) + 9*x + 9.0 == 180 + 0.0*x/2 - x) ==9 )|| (solve((x^2) + 9*x + 9.0 == 180 + 0.0*x/2 - x) ==-19)));//171
            CHECK(((solve((x^2) + 10*x + 10.0 == 220 + 0.0*x/2 - x) ==10 )|| (solve((x^2) + 10*x + 10.0 == 220 + 0.0*x/2 - x) ==-21)));//210


            CHECK(solve(2*x-4.0 == 10.0) ==7);
            CHECK(solve(3*x-5.0 == 1.0) ==2);
            CHECK(solve(4*x-4.0 == 16.0) ==5);
            CHECK(solve(2*x-4.0 == 10.0) ==7);
            CHECK(solve(5*x-6.0 == 14.0) ==4);
            CHECK(solve(1*x-4.0 == 3.0) ==7);
            CHECK(solve(5*x-4.0 == 36.0) ==8);
            CHECK(solve(2*x-3.0 == 15.0) ==9);
            CHECK(solve(5*x-2.0 == 8.0) ==2);
            CHECK(solve(5*x-3.0 == 2.0) ==1);

            CHECK(solve(3*x-1.0 == 2.0) ==1);
            CHECK(solve(3*x-2.0 == 4.0) ==2);
            CHECK(solve(4*x-1.0 == 3.0) ==1);
            CHECK(solve(4*x-2.0 == 6.0) ==2);
            CHECK(solve(5*x-1.0 == 4.0) ==1);
            CHECK(solve(5*x-2.0 == 8.0) ==2);
            CHECK(solve(6*x-1.0 == 5.0) ==1);
            CHECK(solve(6*x-2.0 == 10.0) ==2);
            CHECK(solve(7*x-1.0 == 6.0) ==1);
            CHECK(solve(7*x-2.0 == 12.0) ==2);

    CHECK_THROWS(solve(0*x==20));
    CHECK_THROWS(solve(2*x-2*x == 10));
    CHECK_THROWS(solve((x^2)==-4));
    CHECK_THROWS(solve((x^2) + 1*x + 1.0 == 4 + 6.0*x/0.0 - x));
    CHECK_THROWS(solve(3*0*x==45));
    CHECK_THROWS(solve(3*x-3*x+1*x-1*x==20));
    CHECK_THROWS(solve(x/0-0+0==20));
    CHECK_THROWS(solve(0*x+5.0==10));
    CHECK_THROWS(solve(0*x-7.0==30));
    CHECK_THROWS(solve(0*x+11==40));


}
=======
    ComplexVariable y;
    CHECK(solve(5*y == y-y+25i) == std::complex<double>(0,5));
    CHECK(solve(1.5*y-15 == y-y+30i) == std::complex<double>(10,20));
    CHECK(solve(5*y-5i == 6*y-5i) == std::complex<double>(0,0));
    CHECK(solve(100*y == 100*y) == std::complex<double>(0,0));
    CHECK(solve(1000*y == 0) == std::complex<double>(0,0));
}

// 10
TEST_CASE("Complex ^"){

    ComplexVariable y;
    CHECK((solve((y^2) == 25) == std::complex<double>(5,0) || solve((y^2) == 25) == std::complex<double>(-5,0)));
    CHECK((solve(y^2 == 1) == std::complex<double>(1,0) || solve(y^2 == 1) ==std::complex<double>(-1,0)));
    CHECK((solve(3*y^2 == 2*y^2+49) == std::complex<double>(7,0) || solve(3*y^2 == 2*y^2+49) == std::complex<double>(-7,0)));
    CHECK(solve(20*y^2 == 20) == std::complex<double>(1,0));
    CHECK(solve(33*y^2 == 0) == std::complex<double>(0,0));
    CHECK_THROWS(solve(y^2 + 7 == 0));
    CHECK_THROWS(solve(y^2 == y-y+5i));
    CHECK_THROWS(solve(y^2 == -1));
    CHECK_THROWS(solve(y^2 + y+ 7 == 0));
    CHECK_THROWS(solve(y^2 + y == 0));
}

// 15
TEST_CASE("Complex /"){

    ComplexVariable y;
    CHECK(solve(y/2 == 25) == std::complex<double>(50,0));
    CHECK(solve(y/10 + 5i == 1) == std::complex<double>(2,-10));
    CHECK(solve((3*y)/3 == y-y+49+33i) == std::complex<double>(49,33));
    CHECK(solve((25*y)/100 == y-y+100+1i) == std::complex<double>(400,4));
    CHECK(solve(y/15+30*y/15 == y-y+10+5i) == std::complex<double>(20,10));
    CHECK(solve(15/y == 10) == std::complex<double>(1.5,0));
    CHECK(solve((y/10)/10/10 == y-y+1000+5000i) == std::complex<double>(1,5));
    CHECK(solve(10/(10/10)+30*y/15 == y+10+5i) == std::complex<double>(0,5));
    CHECK(solve(0 == y/2+10+5i) == std::complex<double>(-20,-10));
    CHECK(solve((12*y)/3 + 4*y -7*y == y-y-10+5i) == std::complex<double>(-10,5));
    CHECK_THROWS(solve(y/0 == 0));
    CHECK_THROWS(solve(10/y == 0));
    CHECK_THROWS(solve(y/(1-1) == -1));
    CHECK_THROWS(solve(y/10-y/10 == 1));
    CHECK_THROWS(solve((25*y) + ((5))== 25*y));
}

// 10
TEST_CASE("Complex mix"){

    ComplexVariable y;
    CHECK((solve(y^2+6*y-16 == 0 ) == std::complex<double>(2,0) || solve(y^2+6*y-16 == 0 ) == std::complex<double>(-8,0)));
    CHECK(((solve((3)*(3)*(y)^2 == 81)) == std::complex<double>(3,0) ||(solve((3)*(3)*(y)^2 == 81)) == std::complex<double>(-3,0)));
    CHECK(solve(3*y^2 == 2*y^2+49) == std::complex<double>(7,0));
    CHECK((solve((10/5)*y^2 +10*y == 100) == std::complex<double>(5,0) ||solve((10/5)*y^2 +10*y == 100) == std::complex<double>(-10,0)));
    CHECK((solve(y*y == 1024) == std::complex<double>(32,0) || solve(y*y == 1024) == std::complex<double>(32,0)));
    CHECK_THROWS(solve(y-y+1i-1i+1i-1i+1i== y+y-y+y-y-y+1-1+1i-1i));
    CHECK_THROWS(solve(y^2+1*y == -1));
    CHECK_THROWS(solve((5*y^2 +1034) == -1));
    CHECK_THROWS(solve(y^y == 0));
    CHECK_THROWS(solve(10+10+15*y+30*y+y^2+y^2-20 + y +10000== 0));
}
>>>>>>> 6cc26b2392a35d46c69d48ea12c6bbc085b60f24
