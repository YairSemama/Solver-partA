//
// Created by yair on 26/04/2020.
//

#ifndef SOLVER_A_SOLVER_H
#define SOLVER_A_SOLVER_H
#pragma once
#include <iostream>
#include <complex>
namespace solver {


    class ComplexVariable{

        public:
             double real_part;
             double comp_part;
             ComplexVariable(){
                 real_part = 5;
             }
        ComplexVariable& operator* (double x);
        ComplexVariable& operator* ( ComplexVariable& rl);
        friend ComplexVariable& operator* (double t , ComplexVariable rl);
        friend ComplexVariable& operator* (double t , std::complex<double> rl);
        friend ComplexVariable& operator* (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator* (ComplexVariable t , std::complex<double> rl);

        ComplexVariable& operator== (ComplexVariable& rl);
        ComplexVariable& operator== (std::complex<double> rl);
        ComplexVariable& operator== (double rl);
        friend ComplexVariable& operator== (double t , ComplexVariable rl);
        friend ComplexVariable& operator== (double t , std::complex<double> rl);
        friend ComplexVariable& operator== (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator== (ComplexVariable t , std::complex<double> rl);

        ComplexVariable& operator^ (double x);
        ComplexVariable& operator^ ( ComplexVariable& rl);
        friend ComplexVariable& operator^ (double t , ComplexVariable rl);
        friend ComplexVariable& operator^ (double t , std::complex<double> rl);
        friend ComplexVariable& operator^ (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator^ (ComplexVariable t , std::complex<double> rl);
        friend ComplexVariable& operator^ (std::complex<double> rl, ComplexVariable t);


        ComplexVariable& operator- ( ComplexVariable& rl);
        ComplexVariable& operator- ( double rl);
        friend ComplexVariable& operator- (double t , ComplexVariable rl);
        friend ComplexVariable& operator- (double t , std::complex<double> rl);
        friend ComplexVariable& operator- (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator- (ComplexVariable t , std::complex<double> rl);

        ComplexVariable& operator+ (double x);
        ComplexVariable& operator+ ( ComplexVariable& rl);
        friend ComplexVariable& operator+ (double t , ComplexVariable rl);
        friend ComplexVariable& operator+ (double t , std::complex<double> rl);
        friend ComplexVariable& operator+ (std::complex<double> rl , double t);
        friend ComplexVariable& operator+ (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator+ (ComplexVariable t , std::complex<double> rl);


        ComplexVariable& operator/ (double x);
        ComplexVariable& operator/ (ComplexVariable& x);
        friend ComplexVariable& operator/ (double t , ComplexVariable rl);
        friend ComplexVariable& operator/ (double t , std::complex<double> rl);
        friend ComplexVariable& operator/ (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator/ (ComplexVariable t , std::complex<double> rl);
    };

    class RealVariable{
        public:
            double num;
            RealVariable(){
                num = 5;
            }
        RealVariable& operator* (double x);
        RealVariable& operator* (RealVariable& rl);
        friend RealVariable& operator* (double t , RealVariable rl);

        RealVariable& operator== (double x );
        RealVariable& operator== (RealVariable& x);
        friend RealVariable& operator== (double t , RealVariable rl);


        RealVariable& operator^ (double x);
        RealVariable& operator^ (RealVariable& x);
        friend RealVariable& operator^ (double t , RealVariable rl);


        RealVariable& operator- (double x);
        RealVariable& operator- (RealVariable& x);
        friend RealVariable& operator- (double t , RealVariable rl);

        RealVariable& operator+ (double x);
        RealVariable& operator+ (RealVariable& x);
        friend RealVariable& operator+ (double t , RealVariable rl);

        RealVariable& operator/ (double x);
        RealVariable& operator/ (RealVariable& x);
        friend RealVariable& operator/ (double t , RealVariable rl);


    };

    double solve(RealVariable t) ;

    std::complex<double> solve(ComplexVariable t) ;




    // ---------------------------------------




}

#endif //SOLVER_A_SOLVER_H
