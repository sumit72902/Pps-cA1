#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key)
      return i;
  }
  return -1;
}

int main() {
  int n, key;
  printf("Enter array size: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter %d elements: ", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("Enter key to search: ");
  scanf("%d", &key);
  int result = linearSearch(arr, n, key);
  if (result == -1)
    printf("Not found\n");
  else
    printf("Found at index %d\n", result);
  return 0;
}