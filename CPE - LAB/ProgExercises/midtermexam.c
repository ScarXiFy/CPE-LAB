#include <stdio.h>

int main() {
  int seriesNum;
  int largestNum;
  int smallestNum;

  do {
    printf("Enter a series of number: ");
    scanf("%d", &seriesNum);

    if (seriesNum > largestNum && seriesNum != -99)
    {
      largestNum = seriesNum;
    }
    if (seriesNum < smallestNum && seriesNum != -99)
    {
      smallestNum = seriesNum;
    }
  } 
  
  while (seriesNum != -99);

  printf("%d is the largest number\n", largestNum);
  printf("%d is the smallest number\n", smallestNum);

  return 0;
}