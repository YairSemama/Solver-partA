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
        double a ,b ,c ;
            RealVariable(){
                a = 0 ;
                b = 1 ;
                c  =  0 ;
            }

        friend RealVariable& operator* (double t , RealVariable rl);
        friend RealVariable& operator* (RealVariable rl, RealVariable rr);
        friend RealVariable& operator* (RealVariable rl ,double t);


        friend RealVariable& operator== (double t , RealVariable rl);
        friend RealVariable& operator== (RealVariable rl ,double t );
        friend RealVariable& operator== (RealVariable rl ,RealVariable rr );


        friend RealVariable& operator^ (RealVariable rl , double t);


        friend RealVariable& operator- (double t , RealVariable rl);
        friend RealVariable& operator- (RealVariable t , RealVariable rl);
        friend RealVariable& operator- (RealVariable rl , double t);


        friend RealVariable& operator+ (double t , RealVariable rl);
        friend RealVariable& operator+ (RealVariable rl  ,double t);
        friend RealVariable& operator+ (RealVariable rl  ,RealVariable rr);


        friend RealVariable& operator/ (double t , RealVariable rl);
        friend RealVariable& operator/ ( RealVariable rl , double t );



    };

    double solve(RealVariable t) ;

    std::complex<double> solve(ComplexVariable t) ;




    // ---------------------------------------




}

#endif //SOLVER_A_SOLVER_H
