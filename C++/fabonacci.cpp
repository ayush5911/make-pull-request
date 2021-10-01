#include <iostream>
using namespace std;

bool prime(int n){
  int i;
    bool isPrime = true;
   if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

bool multiple(int n){
  if(n % 5 == 0) return true;
  else return false;
}
int main() {
    int n, a= 0, b = 1, c = 0;

    cout << "Enter the number of terms till you want series  ";
    cin >> n;

    for (int i = 1; i <= (n+1); ++i) {
        if(i == 1) {
            cout << a << "  ";
            continue;
        }
        if(i == 2) {
            cout << b << "  ";
            continue;
        }
        c = a + b;
        a = b;
        b = c;
        if(prime(c) || multiple(c)){
            cout<<"0"<< "  ";
        } 
        else cout << c << "  ";

    }
    return 0;
}

