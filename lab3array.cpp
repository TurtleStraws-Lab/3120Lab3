#include <iostream>
#include <ctime>
using namespace std;

int fib(int n) {
    int total;
    if (n == 0 || n == 1) {
        total = n;
    } else {
        total = fib(n - 1) + fib(n - 2);  
    }
    return total;
}

int main() {
    int n;
    cout << "Enter how many Fibonacci numbers you want: ";
    cin >> n;
    int store[n+1];  

    
    clock_t Total = clock(); 
    clock_t time; 
    for (int j = 0; j <= n; j++) {
        time = clock();
        store[j] = fib(j);  
    cout << "Time spent for " << j << " "<< (double)(clock() - time) / CLOCKS_PER_SEC << " seconds" << endl;
    }
  
    for (int i = 0; i <= n; i++) {
        if (i == 0 || i == 1) {
            cout << " " << i << "  " << store[i] << endl;
        } else {
            cout << " " << i << " " << store[i-1] << " + " << store[i-2] << " = " << store[i] << endl;
        }
    }
    cout << endl;
    cout << "Total Time spent: " << (double)(clock() - Total) / CLOCKS_PER_SEC << " seconds" << endl;

    return 0;
}

