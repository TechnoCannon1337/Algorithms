#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
//Todo Debug
using namespace std;

/*
The h-index is an author-level metric that measures both the productivity and citation impact of the publications, initially used for an individual scientist or scholar. The h-index correlates with success indicators such as winning the Nobel Prize, being accepted for research fellowships and holding positions at top universities.

The index is based on the set of the scientist's most cited papers and the number of citations that they have received in other publications.

The index was suggested in 2005 by Jorge E. Hirsch, a physicist at UC San Diego, as a tool for determining theoretical physicists' relative quality

The h-index is defined as the maximum value of h such that the given author/journal has published at least h papers that have each been cited at least h times

*/

class HIndexCalculator {
private:
  static int publication_Count;
  int citation_Count;
  int running_H_Index_Count;
  int H_Index_Summation;
  int *H_Index_Array = new int[2][1];

public:
  void printString(string output_String, int output_Data ='\0'){
    cout << output_String << output_Data << endl;
  }

  int getUserInput(){
    int number_Count;
    cin >> number_Count;
    return number_Count;
  }

  size_t resizeHindexArray(int **array, size_t oldsize, size_t amount){
    size_t new_size = oldsize + amount;
    int *new_array = new int[2][new_size];
    memcpy(new_array, array, oldsize * sizeof(int));
    delete [] *array;
    *array = new_array;
    return new_size;

  }

  void setData(){
    printString("Enter Total Number Publication Titles");
    publication_Count = getUserInput();
    resizeHindexArray(&H_Index_Array, 1, publication_Count);
    for (int i=0; i < 2; i++){
      for (int j=0; j < publication_Count; j++){
        printString("Enter Total Number of Citations for Publication number " , j);
        H_Index_Array[0][j] = j;
        H_Index_Array[1][j] = getUserInput();
        }
      }

      int partition(int arr[2][publication_Count], int left, int right){
        int pivot = arr[1][(left + right)/2];
        while (left <= right){
          while (arr[1][left] > pivot) left++;
          while (arr[1][right] < pivot) right--;
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

      sortHIndex(H_Index_Array, 0, publication_Count -1);
      for (int i=0; i < 2; i++){
        for (int j=0; j < publication_Count; j++){
          if (H_Index_Array[1][j] >= H_Index_Array[0][j]){
            H_Index_Summation = H_Index_Array[0][j];
          } else {
            break;
          }
        }
      }
  }

  int getData(){
    printString("The h-index is ", H_Index_Summation);
    return H_Index_Summation;
  }
delete [] H_Index_Array;
};


int main()
{
  HIndexCalculator testHIndexCalculator;
  testHIndexCalculator.setData();
  testHIndexCalculator.getData();
  return 0;
}
