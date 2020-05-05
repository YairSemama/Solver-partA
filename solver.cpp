//
// Created by yair on 26/04/2020.
//
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace solver;


// ----------------------- Complex * --------------------------


ComplexVariable& solver::operator* (double t , ComplexVariable rl)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part * t ;
    temp->real_part = rl.real_part * t ;
    temp->coefficient = rl.coefficient * t ;
    temp ->pow = rl.pow * t ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}


// -------------------------- Complex == ----------------------------



ComplexVariable& solver::operator== (double t , ComplexVariable rl)
{
    ComplexVariable s ;
    ComplexVariable& d =s ;
    return d;
}

ComplexVariable& solver::operator== (ComplexVariable rl , double t)
{
    return rl - t ;
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
ComplexVariable& solver::operator== (ComplexVariable rl ,ComplexVariable rr)
{
   return rl -rr ;
}

// ----------------------------- Complex ^ ---------------------


ComplexVariable& solver::operator^ ( ComplexVariable rl , double t)
{
    if(t == 0) throw std::out_of_range("cant resovle 0 ");
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part  ;
    temp->real_part = rl.real_part  ;
    temp->coefficient = 0 ;
    temp ->pow = rl.pow + 1  ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}







// --------------------- Complex - --------------------------------------


ComplexVariable& solver::operator- (ComplexVariable rl , double t )
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part  ;
    temp->real_part = rl.real_part - t ;
    temp->coefficient = rl.coefficient ;
    temp->pow = rl.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}
ComplexVariable& solver::operator- (ComplexVariable rl , ComplexVariable rr)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part - rr.comp_part  ;
    temp->real_part = rl.real_part - rr.real_part;
    temp->coefficient = rl.coefficient - rr.coefficient ;
    temp->pow = rl.pow - rr.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}

// ------------------------------ Complex + ------------------------


ComplexVariable& solver::operator+ (double t , ComplexVariable rl)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part  ;
    temp->real_part = rl.real_part + t;
    temp->coefficient = rl.coefficient  ;
    temp->pow = rl.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}



ComplexVariable& solver::operator+ (ComplexVariable rl , std::complex<double> rr)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part + rr.imag() ;
    temp->real_part = rl.real_part + rr.real();
    temp->coefficient = rl.coefficient  ;
    temp->pow = rl.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}
ComplexVariable& solver::operator+ (ComplexVariable rl ,double rr)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part  ;
    temp->real_part = rl.real_part + rr;
    temp->coefficient = rl.coefficient  ;
    temp->pow = rl.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}
ComplexVariable& solver::operator+ (ComplexVariable rl ,ComplexVariable rr)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part + rr.comp_part  ;
    temp->real_part = rl.real_part + rr.real_part;
    temp->coefficient = rl.coefficient + rr.coefficient ;
    temp->pow = rl.pow + rr.pow ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}
// ----------------------- Complex / --------------------------


ComplexVariable& solver::operator/ (ComplexVariable rl , double t)
{
    ComplexVariable *temp = new ComplexVariable;
    temp->comp_part = rl.comp_part / t  ;
    temp->real_part = rl.real_part / t;
    temp->coefficient = rl.coefficient / t ;
    temp->pow = rl.pow / t ;
    ComplexVariable& theAns = *temp ;
    return  theAns ;
}

// --------------------------- Real * ------------------------------


RealVariable& solver::operator* (RealVariable rl, RealVariable rr)
{

    RealVariable* ans_ = new RealVariable ;
    if(rl.a !=0 && rr.a != 0 )  throw std::out_of_range("the power is above 2 ") ;
    if(rl.a != 0 && rr.b != 0  || rl.b != 0 && rr.a != rl.b) throw std::out_of_range("the power is above 2 ") ;
    ans_-> a = rl.a * rr.c + rl.b * rl.b + rl.c * rl.a ;
    ans_-> b = rl.b * rr.c + rr.b* rl.c ;
    ans_-> c = rr.c * rl.c ;
    RealVariable& trueAns = *ans_ ;
    return trueAns;
}
RealVariable& solver::operator* (RealVariable rl ,double t)
{
    RealVariable* ans_ = new RealVariable ;
    ans_-> a = t * rl.a ;
    ans_-> b = t * rl.b ;
    ans_-> c = t * rl.c ;
    RealVariable& trueAns = *ans_ ;
    return trueAns;
}

RealVariable& solver::operator* (double t , RealVariable rl)
{
    RealVariable* ans_ = new RealVariable ;
    ans_-> a = t * rl.a ;
    ans_-> b = t * rl.b ;
    ans_-> c = t * rl.c ;
    RealVariable& trueAns = *ans_ ;
    return trueAns;
}

// ---------------------- Real == ----------------------------



RealVariable& solver::operator== (double t , RealVariable rl)
{
    return t-rl ;
}

RealVariable& solver::operator== ( RealVariable rr , RealVariable rl)
{
    return rr-rl;
}



RealVariable& solver::operator== (RealVariable rl , double t  )
{
return rl - t ;
}

// -------------------------- Real ^ ----------------------------

RealVariable& solver::operator^ (RealVariable rl , double t)
{
    if(rl.a != 0 || t > 2 || t < 0) throw std::out_of_range("the power is above 2 ") ;
    RealVariable* ans_ = new RealVariable ;
    if(t==0)
    {
        ans_->a = 0 ;
        ans_->b = 0 ;
        ans_->c = 1 ;
        RealVariable& trueAns = *ans_ ;
        return trueAns;
    }
    ans_->a = rl.b * rl.b ;
    ans_->b = 2 * rl.b * rl.c ;
    ans_->c = rl.c * rl.c ;
    RealVariable& trueAns = *ans_ ;
    return trueAns;
}


// ------------------------ Real - ----------------------------


RealVariable& solver::operator- (double t , RealVariable rl)
{
    RealVariable * ans = new RealVariable;
    ans->a = rl.a;
    ans->b = rl.b;
    ans->c = t - rl.c;
    RealVariable & ans1 = *ans;
    return ans1;
}

RealVariable& solver::operator- (RealVariable rl , RealVariable rr)
{
    RealVariable * ans = new RealVariable;
    ans->a = rl.a - rr.a;
    ans->b = rl.b - rr.b;
    ans->c = rl.c - rr.c;
    RealVariable & ans1 = *ans;
    return ans1;
}

RealVariable& solver::operator- (RealVariable rl , double t)
{
    RealVariable * ans = new RealVariable;
    ans->a = rl.a;
    ans->b = rl.b;
    ans->c =  rl.c - t;
    RealVariable & ans1 = *ans;
    return ans1;
}


// --------------------- Real + ------------------------------



RealVariable& solver::operator+ (double t , RealVariable rl) {
    RealVariable *ans = new RealVariable;
    ans->a = rl.a;
    ans->b = rl.b;
    ans->c = t + rl.c;
    RealVariable &ans1 = *ans;
    return ans1;
}
RealVariable& solver::operator+ (RealVariable rl , double t )
{
    RealVariable * ans = new RealVariable;
    ans->a = rl.a;
    ans->b = rl.b;
    ans->c = t + rl.c;
    RealVariable & ans1 = *ans;
    return ans1;
}

RealVariable& solver::operator+ (RealVariable rl , RealVariable rr )
{
    RealVariable *ans = new RealVariable;
    ans->a = rr.a + rl.a;
    ans->b = rr.b + rl.b;
    ans->c = rr.c + rl.c;
    RealVariable &ans1 = *ans;
    return ans1;
}

// ----------------------- Real / -------------------------



RealVariable& solver::operator/ (double t , RealVariable rl)
{
    if(rl.a == 0 && rl.b == 0 && rl.c == 0 ) throw std::out_of_range("cant solve /0");
    RealVariable *ans = new RealVariable;
    ans->a = t / rl.a;
    ans->b = t / rl.b;
    ans->c = t / rl.c;
    RealVariable &ans1 = *ans;
    return ans1;
}

RealVariable& solver::operator/ (RealVariable rl,double t )
{
    if(t == 0 ) throw std::out_of_range("cant solve /0");

    RealVariable *ans = new RealVariable;
    ans->a = rl.a / t ;
    ans->b = rl.b / t ;
    ans->c = rl.c / t ;
    RealVariable &ans1 = *ans;
    return ans1;
}




// ---------------------- Solve functions -------------------

double solver::solve(RealVariable t) {
    double ans ;
    if(t.a == 0 && t.b == 0) throw  std::out_of_range("Cant solve c = 0");
    if(t.a > 0 && t.b == 0 && t.c > 0 ) throw  std::out_of_range("Cant solve x^2 = -c");
    if(t.a != 0)
    {
        ans = (-t.b+sqrt((pow(t.b,2)-4*t.a*t.c)))/(2*t.a);

    }
    else
    {
        ans = t.c/(-t.b ) ;

    }
return ans ;
}

std::complex<double> solver::solve(ComplexVariable t) {
    std::complex<double> ans ;
    if(t.pow == 0)
    {
        t.real_part = t.real_part/t.coefficient ;
        t.comp_part = t.comp_part/t.coefficient ;
        ans.imag(-t.comp_part);
        ans.real(-t.real_part);
        return ans ;
    }
    if (t.pow > 0 && t.coefficient != 0)
    {
       double c = pow(t.coefficient,2) - 4 * t.pow * t.real_part ;
       if(c < 0){
           c = sqrt(-c);
           c = c/2*t.pow ;
           ans.imag(c);
           ans.real(-t.coefficient/2*t.pow);
           return ans;
       }
       else
       {
           ans.real((-t.coefficient+sqrt((pow(t.coefficient,2)-4*t.pow*t.real_part)))/(2*t.pow));
       }

    } else{
     t.real_part = -t.real_part/t.pow ;
     if(t.real_part > 0)
     {
         ans.real(sqrt(t.real_part));
     }

     else ans.imag(sqrt(-t.real_part));

    }
    return ans ;

}