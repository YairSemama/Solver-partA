//
// Created by yair on 26/04/2020.
//
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace solver;

ComplexVariable & ComplexVariable::operator*(double x)
{
return *this;
}
ComplexVariable & ComplexVariable::operator* ( ComplexVariable& rl)
{
    return *this;

}


ComplexVariable & ComplexVariable::operator== (ComplexVariable& rl)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator== (double rl)
{
    return *this;

}

ComplexVariable & ComplexVariable::operator^ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator^ ( ComplexVariable& rl)
{
    return *this;

}


ComplexVariable & ComplexVariable::operator- ( ComplexVariable& rl)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator- ( double rl)
{
    return *this;

}

ComplexVariable & ComplexVariable::operator+ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator+ ( ComplexVariable& rl)
{
    return *this;

}

ComplexVariable & ComplexVariable::operator/ (double x)
{
    return *this;

}
ComplexVariable & ComplexVariable::operator/ (ComplexVariable& x)
{
    return *this;

}

RealVariable & RealVariable:: operator* (double x)
{
    return *this;

}
RealVariable & RealVariable::operator* (RealVariable& rl)
{
    return *this;

}


RealVariable & RealVariable::operator== (double x )
{
    return *this;

}
RealVariable & RealVariable::operator== (RealVariable& x)
{
    return *this;

}

RealVariable & RealVariable::operator^ (double x)
{
    return *this;

}
RealVariable & RealVariable:: operator^ (RealVariable& x)
{
    return *this;

}

RealVariable & RealVariable:: operator- (double x)
{
    return *this;

}
RealVariable & RealVariable::operator- (RealVariable& x)
{
    return *this;

}


RealVariable & RealVariable::operator+ (double x)
{
    return *this;

}
RealVariable & RealVariable:: operator+ (RealVariable& x)
{
    return *this;

}


RealVariable & RealVariable:: operator/ (double x)
{
    return *this;

}
RealVariable & RealVariable::operator/ (RealVariable& x)
{
    return *this;
}

ComplexVariable& solver::operator* (double t , ComplexVariable rl)
{
ComplexVariable s ;
return s;

}

ComplexVariable& solver::operator/ (double t , ComplexVariable rl)
{

    ComplexVariable s ;
    return s;
}

ComplexVariable& solver::operator- (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    return s;
}

ComplexVariable& solver::operator^ (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    return s;
}

ComplexVariable& solver::operator+ (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    return s;
}

ComplexVariable& solver::operator== (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    return s;
}

ComplexVariable& solver::operator^ (double t , std::complex<double> rl)
{

}
ComplexVariable& solver::operator^ (std::complex<double> t, std::complex<double> rl)
{

}
ComplexVariable& solver::operator^ (ComplexVariable t , std::complex<double> rl)
{

}

ComplexVariable& solver::operator+ (double t , std::complex<double> rl)
{

}
ComplexVariable& solver::operator+ (std::complex<double> t, std::complex<double> rl)
{

}
ComplexVariable& solver::operator+ (ComplexVariable t , std::complex<double> rl)
{

}

ComplexVariable& solver::operator- (double t , std::complex<double> rl)
{

}
ComplexVariable& solver::operator- (std::complex<double> t, std::complex<double> rl)
{

}
ComplexVariable& solver::operator- (ComplexVariable t , std::complex<double> rl)
{

}

ComplexVariable& solver::operator/ (double t , std::complex<double> rl)
{

}
ComplexVariable& solver::operator/ (std::complex<double> t, std::complex<double> rl)
{

}
ComplexVariable& solver::operator/ (ComplexVariable t , std::complex<double> rl)
{

}




RealVariable& solver::operator* (double t , RealVariable rl)
{
RealVariable c;
return c;
}
RealVariable& solver::operator- (double t , RealVariable rl)
{
    RealVariable c;
    return c;
}
RealVariable& solver::operator+ (double t , RealVariable rl)
{
    RealVariable c;
    return c;
}
RealVariable& solver::operator/ (double t , RealVariable rl)
{
    RealVariable c;
    return c;
}
RealVariable& solver::operator== (double t , RealVariable rl)
{
    RealVariable c;
    return c;
}
RealVariable& solver::operator^ (double t , RealVariable rl)
{
    RealVariable c;
    return c;
}
double solver::solve(RealVariable t) {
    return 0 ;
}

std::complex<double> solver::solve(ComplexVariable t) {
return 0 ;


}