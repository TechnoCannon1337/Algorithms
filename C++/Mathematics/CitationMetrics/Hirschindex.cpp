#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/*
The h-index is an author-level metric that measures both the productivity and citation impact of the publications, initially used for an individual scientist or scholar. The h-index correlates with success indicators such as winning the Nobel Prize, being accepted for research fellowships and holding positions at top universities.

The index is based on the set of the scientist's most cited papers and the number of citations that they have received in other publications.

The index was suggested in 2005 by Jorge E. Hirsch, a physicist at UC San Diego, as a tool for determining theoretical physicists' relative quality

The h-index is defined as the maximum value of h such that the given author/journal has published at least h papers that have each been cited at least h times

*/

int class HIndexCalculator() {
private:
  int publication_Count;
  int citation_Count;
  int running_H_Index_Count;
  int H_Index_Summation;
  int H_Index_Array[2][publication_Count];
public:
  void printString(string output_String){
    cout << output_String << endl;
  }
  bool getUserInput(){
    bool number_Count;
    cin >> number_Count;
    return number_Count;
  }

  void setData(){
    printString("Enter Total Number Publication Titles");
    publication_Count = getUserInput();
    for (int i=0; i < 2; i++){
      for (int j; j < publication_Count; j++){
        printString("Enter Total Number of Citations for Publication number " << j);
        H_Index_Array[0][j] = j;
        H_Index_Array[1][j] = getUserInput();

        }
      }
      //Todo: Develop MergeSort Function to order from Max to Min Values
      void sortHIndex(){


      }

      if (H_Index_Array[1][j] >= H_Index_Array[0][j]){
        H_Index_Summation = H_Index_Array[0][j];
      } else {
        break;
      }
    }

  int getData(){
    printString("The h-index is " << H_Index_Summation);
    return H_Index_Summation;
  }

};


int main()
{
  HIndexCalculator testHIndexCalculator;
  testHIndexCalculator();



};