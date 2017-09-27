#include <stdio.h>

int allEvenBits (int x){
  return !(((85<<24)|(85<<16)|(85<<8)|(85))&(~x));
}
int byteSwap(int x, int n, int m){
  int a = n<<3;
  int b = m<<3;
  return (x&(~((255<<a)|(255<<b))))|(((x>>a)&255)<<b)|(((x>>b)&(255))<< a);
}

int addOK(int x, int y){
  return (((x^y)>>31)&1) | !((((x+y)^x)>>31)&1);
}

int bitParity(int x){
  int y = x^(x>>16);
  int z = y^(y>>8);
 int j = z^(z>>4);
 int k = j^(j>>2);
 int l = (k^(k>>1))&1;
 return l;
  
}
int multFiveEights(int x){
int y = ((x>>31)&1);
return (((x+y)<<2) + (x+y))>>3;
}

int thirdBits(){
  return (73 << 24) | (73 << 15) | (73 << 6)| (9); 
}

int bang(int x){
  return (~((((~x)+1) | x)) >> 31)&1;
}

int isEqual(int x, int y){
   return !(x^y);
}

int bitMask(int highbit, int lowbit){
}

int main(){
  int x = 77;
  int y = -22;
  long z = 11073741824;

  printf("X = %d", multFiveEights(x));
	 

  printf("X = %d", multFiveEights(y));
	 

  printf("X = %d", multFiveEights(z));

  int a = 5;
  int b = 7;
  printf("AYE: %d, AYE2 = %d\n", bitParity(a), bitParity(b));
  
  return 0;
}
