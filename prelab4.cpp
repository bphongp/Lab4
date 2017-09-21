//Bamphiane Annie Phongphouthai
//Sep 16, 2017
//bp8qg
//prelab4.cpp
#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;
void sizeOfTest(){
  cout<< "Size of int: "<< sizeof(int)<<endl;
  cout<< "Size of unsigned int: "<< sizeof(unsigned int)<<endl;
  cout<< "Size of float: "<< sizeof(float)<<endl;
  cout<< "Size of double: "<< sizeof(double)<<endl;
  cout<< "Size of char: "<< sizeof(char)<<endl;
  cout<< "Size of bool: "<< sizeof(bool)<<endl;
  cout<< "Size of int*: "<< sizeof(int*)<<endl;
  cout<< "Size of char*: "<< sizeof(char*)<<endl;
  cout<< "Size of double*: "<< sizeof(double*)<<endl;
}
void outputBinary(unsigned int ui){
  string output;
  for(int i =31; i>=0; i--){ //31 bits--start at 31 and down to 0 to get all 32 bits
    if((i+1)%4==0){  //if multiple of 4, prints out space after every 4 bit
      output+= " ";
    }
    if((ui >>i) &1){   //print the 1's
	output+="1";
    }
    else if(output.length()>0){ //print all other spaces as zeros
      output+="0";
      }
  }
  cout <<"Output Binary: "<<output <<endl;
}
void overflow(){
  unsigned int ui = UINT_MAX; //maximum = 4294967295
  cout<<"Maximum value of the unsigned int + 1 : "<< ui +1 <<endl;
  cout<<"This overflow happens because the the maximum unsigned integer is a 32-bit binary number with 1 filled in at every position. When one is added onto this value, the bits will to be all zeros except for the carry over bit cannot fit in the 32-bit. So this makes it 0."<<endl;
  
}

int main(){
  int x;
  cout<<"Please enter an integer: ";
  cin>>x;
  
  cout<<"Byte size of each type: "<<endl;
  sizeOfTest();

  outputBinary(x);
  
  overflow();
  
  return 0;
}
