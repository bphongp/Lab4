//Bamphiane Annie Phongphouthai
//bp8qg
//Sep 19, 2017
//inlab4.cpp

#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main(){
  union foo{
    float f;
    unsigned int ui;
  }bar;

  //values of zero and one
  int x=0;//, one=1;
  unsigned int u0 =0;//, u1=1;
  float f0=0.0;//, f1=1.0;
  double d0= 0.0;//, d1=1.0;
  char ch0= '0', ch1='1';
  bool fls= false, tr=true;
  int* ipt=NULL;
  char* cpt= NULL;
  double* dpt =NULL;
  x =1;

  //Representation in memory looking at debugger
  bool b=false;
  char c= '0';
  int i=0;
  double d= 0.0;
  int* ip=NULL;
  cout<<"Representation in memory:"<< b<<" "<<c<< " "<<
    i<< " "<< d << " " <<ip<<endl;
  
  //Finding maximums
  cout<<"Max UI:  "<<UINT_MAX<<endl;
  cout<<"Max Int:   "<<INT_MAX<<endl;
  cout<<"Max Char:   "<<CHAR_MAX<<endl;
  
  //Primitive Arrays
  int IntArray[10];//={0,1,2,3,4,5,6,7,8,9};
  char CharArray[10];//{'a','b','c','d','e','f','g','h','i','j'};
  int IntArray2D[6][5];//
  char CharArray2D[6][5];

  for(int i=0; i<10; i++){
    IntArray[i]=i;
    cout<< "Value: "<<IntArray[i]<<"  ";
    cout<< "i: "<<i<<endl;
  }
  
  char ch ='a';
  for(int i=0; i<10; i++){
    CharArray[i]=ch;
    ch++;
    cout<< "Char Value: "<<CharArray[i]<<"  ";
    cout<< "i: "<<i<<endl;
  }
  for(int i=0; i<6;i++){
    for(int j=0;j<5;j++){
      IntArray2D[i][j]=i+j;
      cout<<"IntArray2D:"<<IntArray2D[i][j]<<endl;
    }
    cout<<endl;
  }
 ch='a';
 for(int i=0; i<6;i++){
   for(int j=0;j<5;j++){
      CharArray2D[i][j]=ch;
      ch++;
      cout<<"CharArray2D:"<<CharArray2D[i][j]<<endl;
    }
   cout<<endl;
 }
 return 0;
}
