#include <iostream>
using namespace std;

int main()
{
  int A, B, C, D, E, F;
  for (A = 1; A <= 65; A++) {
      for (B = A + 1; B <= 66; B++) {
        for (C = B + 1; C <= 67; C++) {
          for (D = C + 1; D <= 68; D++) {
            for (E = D + 1; E <= 69; E++) {
              for (F = 1; F <= 26; F++) {
                cout
                << A << ","
                << B << ","
                << C << ","
                << D << ","
                << E << ","
                << F << "\n";
              }
            }
          }
        }
      }
    }
}
