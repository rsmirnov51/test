#include <catch.hpp>

#include <iostream>

using namespace std;

int stepen2(int N)
{
  int res = 1;
  for (int i = 0; i < N; i++)  res *= 2;
  return res;
}

TEST_CASE("Stepen function complete", [stepen]){
}
