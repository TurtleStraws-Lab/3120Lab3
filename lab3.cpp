#include <iostream>
#include<time.h>
using namespace std;


int fib(int n){
int total;    
    if(n == 0 || n == 1){
    total = n;
    }
    else{
    total = fib(n-1) + fib(n-2);
    }
return total;
}
int store[] = {};

int main() 
{
int n;
cout << "Enter how many fib numbers you want" <<endl;
cin >> n;
for(int j = 0; j <= n; j++){
    clock_t time = clock();
    //store[j]= fib(j);
  if(j == 0 || j == 1){
  cout << " 0" << " + " << j << " = " << fib(j) << " ";
}
  else{
  cout << " " << n << " "<< fib(j-1) << " + " << fib(j-2) << " = " << fib(j) << " ";
  }
  cout << "time spent: " << (double)(clock() - time)/CLOCKS_PER_SEC << " seconds" <<endl;
}
  return 0;
}
