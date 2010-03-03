#include <iostream>

#include "mean.hh"

using namespace std;
int main(int argc, char *argv[]) 
{
   cout << "Number of parameters: " << argc << endl;
   for (int i=0; i<argc; i++)
      cout << "argv[" << i << "] = " << argv[i] << endl;

   mean * me = new mean(3,3);

   me->calculate();
   cout<<me->getValue()<<endl;

   int aInt= static_cast<int>(300/13.);
   cout<<aInt<<endl;

   delete me;

   return 0;
}

