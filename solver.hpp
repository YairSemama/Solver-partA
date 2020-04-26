//
// Created by yair on 26/04/2020.
//

#ifndef SOLVER_A_SOLVER_H
#define SOLVER_A_SOLVER_H
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
    };

    class RealVariable{
        public:
            double num;
            RealVariable(){
                num = 5;
            }
    };

    class solve{
        public:
            RealVariable real_num;
            ComplexVariable comp_num;
    };

    double solve(RealVariable Real);
    double solve(ComplexVariable Real);

    RealVariable& operator* (double x, RealVariable& rl);
    RealVariable& operator* (RealVariable& x, RealVariable& rl);
    RealVariable& operator* (RealVariable& x, double rl);

    RealVariable& operator== (double x, RealVariable& rl);
    RealVariable& operator== (RealVariable& x, RealVariable& rl);
    RealVariable& operator== (RealVariable& x, double rl);

    RealVariable& operator^ (double x, RealVariable& rl);
    RealVariable& operator^ (RealVariable& x, RealVariable& rl);
    RealVariable& operator^ (RealVariable& x, double rl);

    RealVariable& operator- (double x, RealVariable& rl);
    RealVariable& operator- (RealVariable& x, RealVariable& rl);
    RealVariable& operator- (RealVariable& x, double rl);

    RealVariable& operator+ (double x, RealVariable& rl);
    RealVariable& operator+ (RealVariable& x, RealVariable& rl);
    RealVariable& operator+ (RealVariable& x, double rl);

    RealVariable& operator/ (double x, RealVariable& rl);
    RealVariable& operator/ (RealVariable& x, RealVariable& rl);
    RealVariable& operator/ (RealVariable& x, double rl);

    // ---------------------------------------


    ComplexVariable& operator* (double x, ComplexVariable& rl);
    ComplexVariable& operator* (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator* (ComplexVariable& x, double rl);

    ComplexVariable& operator== (double x, ComplexVariable& rl);
    ComplexVariable& operator== (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator== (ComplexVariable& x, double rl);

    ComplexVariable& operator^ (double x, ComplexVariable& rl);
    ComplexVariable& operator^ (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator^ (ComplexVariable& x, double rl);

    ComplexVariable& operator- (double x, ComplexVariable& rl);
    ComplexVariable& operator- (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator- (ComplexVariable& x, double rl);

    ComplexVariable& operator+ (double x, ComplexVariable& rl);
    ComplexVariable& operator+ (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator+ (ComplexVariable& x, double rl);

    ComplexVariable& operator/ (double x, ComplexVariable& rl);
    ComplexVariable& operator/ (ComplexVariable& x, ComplexVariable& rl);
    ComplexVariable& operator/ (ComplexVariable& x, double rl);

}

#endif //SOLVER_A_SOLVER_H
