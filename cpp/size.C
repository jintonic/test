#include <iostream>
#include <sys/time.h>
#include <sys/types.h>

using namespace std;

int main()
{
  cout<<"size of char: "<<sizeof(char)<<endl;
  cout<<"size of short: "<<sizeof(short)<<endl;
  cout<<"size of u_short: "<<sizeof(u_short)<<endl;
  cout<<"size of int: "<<sizeof(int)<<endl;
  cout<<"size of u_int: "<<sizeof(u_int)<<endl;
  cout<<"size of long: "<<sizeof(long)<<endl;
  cout<<"size of float: "<<sizeof(float)<<endl;
  cout<<"size of double: "<<sizeof(double)<<endl;
  cout<<"size of timeval: "<<sizeof(timeval)<<endl;

  return 0;
}
