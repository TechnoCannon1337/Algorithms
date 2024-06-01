#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class HIndexCalculator {
private:
static const int publication_Count = 6;
int H_Index_Array[2][publication_Count] = {
  {1, 2, 3, 4, 5, 6},
  {5, 25, 8, 3, 3, 5}
};

public:
int partition(int arr[2][publication_Count], int left, int right){
  int pivot = arr[1][(left + right)/2];
  while (left <= right){
    while (arr[1][left] < pivot) left++;
    while (arr[1][right] > pivot) right--;
    if (left <= right){
      int temp_swap = arr[1][left];
      arr[1][left] = arr[1][right];
      arr[1][right] = temp_swap;
      left++;
      right--;
    }
  }
  return left;
}

void sortHIndex(int arr[2][publication_Count], int left, int right){
  int index = partition(arr, left, right);
  if (left < index - 1){
    sortHIndex(arr, left, index - 1);
  }
  if (index < right) {
    sortHIndex(arr, index, right);
  }
}

void startQuickSort(){
sortHIndex(H_Index_Array, 0, publication_Count -1);
for (int i=0; i < 1; i++){
  for (int j=0; j < publication_Count; j++){
    cout << H_Index_Array[1][j] << " ";
  }
}

}

};

int main(){
HIndexCalculator testHIndexCalculator;
testHIndexCalculator.startQuickSort();
return 0;

}
