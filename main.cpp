// Given an integer array of size N. Write Program to find maximum product
// subarray in a given array.
// brute force solution
#include <iostream>
using namespace std;

int maxProductSubarray(int arr[], int size) {
  int maxpro = arr[0];
  for (int i = 0; i < size; i++) {
    int prod = arr[i];
    for (int j = i + 1; j < size; j++) {
      prod *= arr[j];
      maxpro = max(maxpro, prod); //Funcation on maximum number
    }
  }
  return maxpro;
}

int main() {
  int arr[] = {2, -4, -1, -3};
  int n = 4;
  cout << maxProductSubarray(arr, n);

  return 0;
}
