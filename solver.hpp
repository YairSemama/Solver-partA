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
             double coefficient;
             double pow;

             ComplexVariable(){
                 real_part = 0 ;
                 comp_part = 0 ;
                 coefficient = 1 ;
                 pow = 0 ;

             }

        friend ComplexVariable& operator* (double t , ComplexVariable rl);
        friend ComplexVariable& operator* (double t , std::complex<double> rl);
        friend ComplexVariable& operator* (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator* (ComplexVariable t , std::complex<double> rl);


        friend ComplexVariable& operator== (double t , ComplexVariable rl);
        friend ComplexVariable& operator== (double t , std::complex<double> rl);
        friend ComplexVariable& operator== (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator== (ComplexVariable rl ,ComplexVariable rr);
        friend ComplexVariable& operator== (ComplexVariable t , double num);



        friend ComplexVariable& operator^ ( ComplexVariable rl , double t);
        friend ComplexVariable& operator^ (std::complex<double> rl , double t);


        friend ComplexVariable& operator- (double t , ComplexVariable rl);
        friend ComplexVariable& operator- (double t , std::complex<double> rl);
        friend ComplexVariable& operator- (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator- (ComplexVariable rl , ComplexVariable rr);
        friend ComplexVariable& operator- (ComplexVariable t , double num);



        friend ComplexVariable& operator+ (double t , ComplexVariable rl);
        friend ComplexVariable& operator+ (ComplexVariable rl , std::complex<double> rr);
        friend ComplexVariable& operator+ (std::complex<double> rl , double t);
        friend ComplexVariable& operator+ (ComplexVariable rl, double t );
        friend ComplexVariable& operator+ (ComplexVariable rl , ComplexVariable rr);



        friend ComplexVariable& operator/ (double t , ComplexVariable rl);
        friend ComplexVariable& operator/ (double t , std::complex<double> rl);
        friend ComplexVariable& operator/ (std::complex<double> t, std::complex<double> rl);
        friend ComplexVariable& operator/ (ComplexVariable rl ,double t);
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
