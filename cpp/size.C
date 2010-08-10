#include <iostream>
#include <sys/time.h>
#include <sys/types.h>

using namespace std;

typedef struct xtimeval {
   long long tv_sec;
   long long tv_usec;
} XTIMEVAL;

typedef struct xtimeval acq_time; ///< from onlhead.h

/**
 * BUFHEAD: information block included at the beginning of different buffers.
 * from onlbuf.h
 */
typedef struct sort_buffer_header {
   u_int    data_size; ///< size of buffer (byte) including head
   u_int    flag;
   int      run_number;
   char     nodename[8]; ///< name of computer
   u_int    server_number;
   u_int    tko_number;
   u_int    serial_event_number;
   acq_time time;
   u_int    buffer;
   u_int    scan_num;
   u_int    scan_bit;
   u_int    tko_flag; /* indicate using or no-using smps(TKOs) */
   u_int    tko_error_flag; /* indicate error occured or not */
} BUFHEAD;

int main()
{
  cout<<"size of bufhead: "<<sizeof(BUFHEAD)<<endl;
  cout<<"size of char: "<<sizeof(char)<<endl;
  cout<<"size of short: "<<sizeof(short)<<endl;
  cout<<"size of u_short: "<<sizeof(u_short)<<endl;
  cout<<"size of int: "<<sizeof(int)<<endl;
  cout<<"size of u_int: "<<sizeof(u_int)<<endl;
  cout<<"size of long: "<<sizeof(long)<<endl;
  cout<<"size of float: "<<sizeof(float)<<endl;
  cout<<"size of double: "<<sizeof(double)<<endl;
  cout<<"size of timeval: "<<sizeof(timeval)<<endl;
  cout<<"size of long long: "<<sizeof(long long)<<endl;

  return 0;
}
