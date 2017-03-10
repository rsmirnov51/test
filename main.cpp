#define CATH_CONFIG_MAIN
#include "catch.cpp"
#include <iostream>

using namespace std;

void main()
{
    int n = 0;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "2^" << n << " = " << stepen(n) << endl;
}
