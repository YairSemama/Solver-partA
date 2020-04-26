//
// Created by yair on 26/04/2020.
//
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace solver;

ComplexVariable & ComplexVariable::operator*(double x)
{

}
ComplexVariable & ComplexVariable::operator* ( ComplexVariable& rl)
{

}


ComplexVariable & ComplexVariable::operator== (ComplexVariable& rl)
{

}
ComplexVariable & ComplexVariable::operator== (double rl)
{

}

ComplexVariable & ComplexVariable::operator^ (double x)
{

}
ComplexVariable & ComplexVariable::operator^ ( ComplexVariable& rl)
{

}


ComplexVariable & ComplexVariable::operator- ( ComplexVariable& rl)
{

}
ComplexVariable & ComplexVariable::operator- ( double rl)
{

}

ComplexVariable & ComplexVariable::operator+ (double x)
{

}
ComplexVariable & ComplexVariable::operator+ ( ComplexVariable& rl)
{

}

ComplexVariable & ComplexVariable::operator/ (double x)
{

}
ComplexVariable & ComplexVariable::operator/ (ComplexVariable& x)
{

}

RealVariable & RealVariable:: operator* (double x)
{

}
RealVariable & RealVariable::operator* (RealVariable& rl)
{

}


RealVariable & RealVariable::operator== (double x )
{

}
RealVariable & RealVariable::operator== (RealVariable& x)
{

}

RealVariable & RealVariable::operator^ (double x)
{

}
RealVariable & RealVariable:: operator^ (RealVariable& x)
{

}

RealVariable & RealVariable:: operator- (double x)
{

}
RealVariable & RealVariable::operator- (RealVariable& x)
{

}


RealVariable & RealVariable::operator+ (double x)
{

}
RealVariable & RealVariable:: operator+ (RealVariable& x)
{

}


RealVariable & RealVariable:: operator/ (double x)
{

}
RealVariable & RealVariable::operator/ (RealVariable& x)
{

}

ComplexVariable& solver::operator* (double t , ComplexVariable rl)
{

}

ComplexVariable& solver::operator/ (double t , ComplexVariable rl)
{

}

ComplexVariable& solver::operator- (double t , ComplexVariable rl)
{

}

ComplexVariable& solver::operator^ (double t , ComplexVariable rl)
{

}

ComplexVariable& solver::operator+ (double t , ComplexVariable rl)
{

}

ComplexVariable& solver::operator== (double t , ComplexVariable rl)
{

}

RealVariable& solver::operator* (double t , RealVariable rl)
{

}
RealVariable& solver::operator- (double t , RealVariable rl)
{

}
RealVariable& solver::operator+ (double t , RealVariable rl)
{

}
RealVariable& solver::operator/ (double t , RealVariable rl)
{

}
RealVariable& solver::operator== (double t , RealVariable rl)
{

}
RealVariable& solver::operator^ (double t , RealVariable rl)
{

}
double solver::solve(RealVariable t) {
    return 0 ;
}

std::complex<double> solver::solve(ComplexVariable t) {

}