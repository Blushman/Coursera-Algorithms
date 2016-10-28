#include <stdio.h>

long long MaxPairwiseProductFast(int numbers[], int n) {
  int max_index1 = -1;
  for (int i = 0; i < n; ++i)
    if ((max_index1 == -1) || (numbers[i] > numbers[max_index1]))
      max_index1 = i;
  int max_index2 = -1;
  for (int j = 0; j < n; ++j)
    if ((j!= max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
      max_index2 = j;
  long long result=numbers[max_index1] * numbers[max_index2];
  return (result);
}

int main() {
  int n;
  scanf("%d", &n);
  int numbers[n];
  for (int i = 0; i < n; ++i) {
  scanf("%d", &numbers[i]);
  }

  long long result = MaxPairwiseProductFast(numbers, n);
  printf("%lld\n", result);
  return 0;
}
