#include "mean.hh"

mean::mean(double a, double b)
{
   x=a;
   y=b;
}

void mean::calculate()
{
   fMean=(x+y)/2.;
}

