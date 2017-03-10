#define CATH_CONFIG_MAIN
#include "catch.cpp"
#include <iostream>
#include "main.h"

using namespace std;

int stepen2(int N)
{
  int res = 1;
  for (int i = 0; i < N; i++)  res *= 2;
  return res;
}

int stepen3(int N)
{
  int res = 1;
  for (int i = 0; i < N; i++)  res *= 3;
  return res;
}

void main()
{
    int n = 0;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "2^" << n << " = " << stepen2(n) << endl;
    cout << "3^" << n << " = " << stepen3(n) << endl;
}
