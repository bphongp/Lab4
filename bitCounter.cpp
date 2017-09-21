//Bamphiane Annie Phongphouthai
//bp8qg
//Sep 20,2017
//bitCounter.cpp
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;

int counter(int x){ //function will return number of 1's in binary number so need to divide and add remainder
  if (x==0){ 
    return 0;
  }
  if(x==1){  
    return 1;
  }
  else{
    return(counter(x/2))+(x%2);
  }
}
int main(int argc, char **argv){
  if(argc==0){
    cout<<"Error argc=0. No Argument"<<endl;
    exit(1);
  }
  int n = atoi(argv[1]);
  cout<< "Number of ones in Binary of "<<n<<": "<<counter(n)<<endl;
  return 0;
}



