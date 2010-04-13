#include <iostream>

using namespace std;

class B 
{
  public:
    B(){cout<<"B's ctor"<<endl;}
    ~B(){cout<<"B's dtor"<<endl;}
};

class A 
{
  public:
    A()
    {
      cout<<"A's ctor."<<" create B object..."<<endl;
      fB=B();
    }
    ~A(){cout<<"A's dtor"<<endl;}

    void info(){cout<<"A's info."<<endl;}

  private:
    B fB;
};

int main()
{
  cout<<"create A object."<<endl;
  A* a = new A();

  cout<<"delete A object."<<endl;
  delete a;


  cout<<"create an other A object."<<endl;
  A a1 = A();
  a1.info();
 
  return 0;
}
