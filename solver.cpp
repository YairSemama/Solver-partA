//
// Created by yair on 26/04/2020.
//
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace solver;


// ----------------------- Complex * --------------------------

ComplexVariable & ComplexVariable::operator*(double x)
{
    return *this;
}
ComplexVariable & ComplexVariable::operator* ( ComplexVariable& rl)
{
    return *this;

}
ComplexVariable& solver::operator* (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;

}
ComplexVariable& solver::operator* (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator* (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator* (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

// -------------------------- Complex == ----------------------------



ComplexVariable & ComplexVariable::operator== (ComplexVariable& rl)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator== (double rl)
{
    return *this;

}

ComplexVariable& solver::operator== (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator== (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator== (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator== (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

// ----------------------------- Complex ^ ---------------------

ComplexVariable & ComplexVariable::operator^ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator^ ( ComplexVariable& rl)
{
    return *this;

}

ComplexVariable& solver::operator^ (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator^ (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator^ (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator^ (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

// --------------------- Complex - --------------------------------------
ComplexVariable & ComplexVariable::operator- ( ComplexVariable& rl)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator- ( double rl)
{
    return *this;

}

ComplexVariable& solver::operator- (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator- (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator- (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator- (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

// ------------------------------ Complex + ------------------------

ComplexVariable & ComplexVariable::operator+ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator+ ( ComplexVariable& rl)
{
    return *this;

}
ComplexVariable& solver::operator+ (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}


ComplexVariable& solver::operator+ (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator+ (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;

}
ComplexVariable& solver::operator+ (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
// ----------------------- Complex / --------------------------

ComplexVariable & ComplexVariable::operator/ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator/ (ComplexVariable& x)
{
    return *this;

}
ComplexVariable& solver::operator/ (double t , ComplexVariable rl)
{

    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}


ComplexVariable& solver::operator/ (double t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator/ (std::complex<double> t, std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}
ComplexVariable& solver::operator/ (ComplexVariable t , std::complex<double> rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

// --------------------------- Real * ------------------------------

RealVariable & RealVariable:: operator* (double x)
{
    return *this;

}
RealVariable & RealVariable::operator* (RealVariable& rl)
{
    return *this;

}

RealVariable& solver::operator* (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;
}

// ---------------------- Real == ----------------------------

RealVariable & RealVariable::operator== (double x )
{
    return *this;

}
RealVariable & RealVariable::operator== (RealVariable& x)
{
    return *this;

}
RealVariable& solver::operator== (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;
}

// -------------------------- Real ^ ----------------------------

RealVariable & RealVariable::operator^ (double x)
{
    return *this;

}
RealVariable & RealVariable:: operator^ (RealVariable& x)
{
    return *this;

}
RealVariable& solver::operator^ (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;
}
// ------------------------ Real - ----------------------------
RealVariable & RealVariable:: operator- (double x)
{
    return *this;

}
RealVariable & RealVariable::operator- (RealVariable& x)
{
    return *this;

}

RealVariable& solver::operator- (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;;
}

// --------------------- Real + ------------------------------

RealVariable & RealVariable::operator+ (double x)
{
    return *this;

}
RealVariable & RealVariable:: operator+ (RealVariable& x)
{
    return *this;

}

RealVariable& solver::operator+ (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;
}

// ----------------------- Real / -------------------------

RealVariable & RealVariable:: operator/ (double x)
{
    return *this;

}
RealVariable & RealVariable::operator/ (RealVariable& x)
{
    return *this;

}

RealVariable& solver::operator/ (double t , RealVariable rl)
{
    RealVariable c;
    RealVariable& d =c ;
    return d;
}

// ---------------------- Solve functions -------------------

double solver::solve(RealVariable t) {
    return 0 ;
}

std::complex<double> solver::solve(ComplexVariable t) {
    return 0 ;


}