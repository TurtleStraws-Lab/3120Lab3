#include <iostream>
#include<time.h>
using namespace std;


int fib(int n){
int a = 0;
int b = 1;
int temp;
    if(n == 0 || n == 1){
    return a;

    }
    
    else{
     for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
     }
    }
return b;
}

int main() 
{
int n;
cout << "Enter how many fib numbers you want" <<endl;
cin >> n;
clock_t time;
clock_t Total= clock();
for(int j = 0; j <= n; j++){
time = clock();
  if(j == 0 || j == 1){
  cout << "" << j << " " << j << endl;
}
  else{
  int fib1 = fib(j-1);
  int fib2 = fib(j-2);
  cout << "" << j << " " << fib1 << " + " << fib2 << " = " << (fib1 + fib2) << endl;
  }

cout << "time spent: " << (double)(clock() - time)/CLOCKS_PER_SEC << " seconds" <<endl;
}
cout << endl;
cout << "Total time spent: " << (double)(clock() - Total)/CLOCKS_PER_SEC << " seconds" <<endl;
  return 0;
}
