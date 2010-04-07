// $Id$
// check whether a file exists.
// compile:
// $ g++ -o check file.C

#include <iostream>
#include <sys/stat.h>

using namespace std;

int main(int argc, char *argv[]) 
{
  if (argc != 2) {
    cout<<"Usage: \n"<<"$ ./check fileName"<<endl;
    return 1;
  }

  cout<<"use access():"<<endl;
  if(access(argv[1], F_OK) != -1) {
    cout<<"file "<<argv[1]<<" exists :)"<<endl;
  } else {
    cout<<"file "<<argv[1]<<" doesn't exist :("<<endl;
  }

  cout<<"use stat():"<<endl;
  struct stat stFileInfo; 
  int intStat; 

  intStat = stat(argv[1],&stFileInfo); 

  if(intStat == 0) { 
    cout<<"file "<<argv[1]<<" exists :)"<<endl;
    cout<<"its size is "<<stFileInfo.st_size<<" bytes."<<endl;
    cout<<"its mode is "<<stFileInfo.st_mode<<endl;
  } else { 
    cout<<"file "<<argv[1]<<" doesn't exist :("<<endl;
  } 
  return 0;
}
