#include <catch.hpp>
#include <iostream>

using namespace std;

int stepen3(int N)
{
  int res = 1;
  for (int i = 0; i < N; i++)  res *= 3;
  return res;
}

TEST_CASE("Stepen is comp", [stepen]){
}
