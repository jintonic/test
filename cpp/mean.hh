#ifndef _MEAN_HH
#define _MEAN_HH

class mean
{
public:
   mean(double a=10, double b=20);
   ~mean(){};
       
   void calculate();

   double getValue(){return fMean;}

protected:
   double x,y,fMean;
}; //<- the semicolon cannot be neglected
#endif

