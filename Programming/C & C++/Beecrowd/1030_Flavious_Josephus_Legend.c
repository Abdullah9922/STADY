//https://judge.beecrowd.com/en/problems/view/1030

#include <stdio.h>
int findSurvivor(int n, int k, int start)
{
 if(n == 1)
  return 1;

 int newStart, survivor;
 newStart = (start + k - 2) % n + 1;
  survivor = findSurvivor(n - 1, k, newStart);

  if(survivor < newStart){
   return survivor;
  }else{
   return survivor + 1;
  }
}

int josephus(int n, int k)
{
 return findSurvivor(n, k, 1);
}

int main()
{
 int testCases, n, k, result, i;
 scanf("%i", &testCases);

 for (i = 1; i <= testCases; ++i)
 {
  scanf("%i %i", &n, &k);
  result = josephus(n, k);
  printf("Case %i: %i\n", i, result);
 }

 return 0;
}

