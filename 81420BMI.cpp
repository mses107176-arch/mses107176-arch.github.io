#include <iostream>
using namespace std;
int main() {
    float BMI, Height, Weight;
    cin >> Height >> Weight;
    BMI = Weight / ((Height / 100)*(Height / 100));
    cout << "BMI = " << BMI << '\n';
    return 0;
}